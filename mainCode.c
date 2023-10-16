/* Program designed to do ... wordle...? with file input
      and file output.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

// Gets a word from user
char* getGuess();

// Helper function that checks if the user input is all characters or not
int validateGuess();

// Check user's guess and returns a string formatted to display
// which letters are correct or not and letters not in the right place.
char* checkGuess();

//SIG30-c
void handler(int signum){
    _exit -1;
}

int main(int argc, char *argv[]){
    char buffer[1024];
    char *words[100];
    int wordCount = 0;
    srand(time(NULL)); //Initialize random number generator
    int random;

    // Check for correct number of arguments
    if (argc != 2){
        printf("\nUSAGE: --- ./a.out <file input> ---\n\n");
        exit(-1);
    }

    // Open files and check for valid pointer
    FILE *fin = fopen(argv[1], "r"); //Read file, file must exist
    if (fin == NULL){
        fprintf(stderr, "\n--- Error opening file %s ---\n\n", argv[1]);
        exit(-1);
    }
    

    // Read in words from file and store them in words[] array
    //FIO37-C
    while (fgets(buffer, sizeof(buffer), fin) != NULL){
        char *p = strchr(buffer, '\n');
        if (p) {
            *p = '\0'; // Replace the newline character with a null terminator
            words[wordCount] = strdup(buffer); // Store the modified word in the words array
        } else {
            words[wordCount] = strdup(buffer);
        }
        if (words[wordCount] == NULL){
            fprintf(stderr, "\n--- Error reading line ---\n\n");
            exit(-1);
        }
        wordCount++;
    }

    // Choose a random word from the list as the wordle word
    random = rand() % wordCount;
    char* word = words[random];
    int wordLength = strlen(word);
    int guesses = 6;

/*
Start
*/

    printf("\t\t-=- W O R D L E -=-\n");
    printf("\t =O=------------=O=------------=O=\n\n");
    printf("The word has %d letters. You have 6 chances. Good luck!\n", wordLength);
    printf("_ = Letter not in word\n");
    printf("/ = Letter in word but not in correct spot\n\n");

    int success = 0;
    while (guesses != 0){
        char* guess = getGuess(wordLength);

        if (strcmp(guess, word) == 0){
            success = 1;
            printf("       %s", guess);
            break;
        }else{
            printf("       ");
            printf(checkGuess(guess, word, wordLength));
            printf("\n\n");
        }

        guesses--;
    }
    if (success == 1){
        printf("\n\n--- Congratulations! You got it! ---\n\n");
    }
    else{
        //FIO47-C
        printf("\n\n--- Too bad, the word was %s! ---\n\n", word);
    }

/*
End
*/
    // Close file descriptor and clean up memory
    if(fseek(fin, 0L, SEEK_SET) != 0){
        return -1;
    }

    //FIO39-C
    if(fwrite("\nSuccessful\n", strlen("\nSuccessful\n"), 1, fin) != strlen("\nSuccessful\n")){
        return -1;
    } 
    fclose(fin);
    for (int i = 0; i < wordCount; i++) {
        free(words[i]);
    }

    return 0;
}

char* getGuess(int wordLength){
    char guess[100]; //Assuming no word will be greater than 100 characters
    int length = 0;
    int flag = 1;
    
    while (flag != 0){
        printf("Guess: ");
        if (scanf("%99s", guess) != 1){
            fprintf(stderr, "\n--- Input error ---\n\n");
            exit(-1);
        }
        //FIO30-C
        fputs(guess,stdout);
        fputs("\n",stdout);
        length = strlen(guess);
        if (length != wordLength){
            printf("Wrong number of letters! The word is %d letters long!\n\n", wordLength);
        }
        else{
            if (validateGuess(guess, length) == 1){
                flag = 0;
            }
        }
    }
    return strdup(guess);
}

int validateGuess(char* guess, int length){
    for (int i = 0; i < length; i++){
        if (!isalpha(guess[i])){
            return 0;
        }
        else{
            guess[i] = tolower(guess[i]);
        }
    }
    return 1;
}

char* checkGuess(char* guess, char* word, int wordLength){
    char outputStr[wordLength];
    int count = 0;
    
    //Check for absolute matches
    //FLP30-C
    for (int i = 0; i < wordLength; i++){
        outputStr[i] = '_';
        if (guess[i] == word[i]){
            outputStr[i] = guess[i];
        }
    }
    //Check for partial matches
    for (int i = 0; i < wordLength; i++) {
        if (outputStr[i] == '_') {
            for (int j = 0; j < wordLength; j++) {
                if (guess[i] == word[j] && outputStr[j] == '_') {
                    outputStr[i] = '/'; // Indicate a partial match
                    break; // Break out of the inner loop to avoid multiple partial matches
                }
            }
        }
    }

    return strdup(outputStr);
}
