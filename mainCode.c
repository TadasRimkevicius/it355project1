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
    while (fgets(buffer, sizeof(buffer), fin) != NULL){
        words[wordCount] = buffer; //Put word into word array
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
    int guesses = 5;

/*
Start
*/

    printf("\t\t-=- W O R D L E -=-\n");
    printf("\t =O=------------=O=------------=O=\n\n");
    printf("The word has %d letters. You have 5 guesses. Good luck!\n\n", wordLength);

    int success = 0;
    while (guesses != 0){
        char* guess = getGuess(wordLength);
        printf("%s\n", guess);

        if (strcmp(guess, word) == 0){
            success = 1;
            break;
        }

        guesses--;
    }
    if (success == 1){
        printf("Congratulations! You got it!\n");
    }
    else{
        printf("Too bad, the word was %s!\n", word);
    }

/*
End
*/
    // Close file descriptors and clean up memory
    fclose(fin);

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