/* Program designed to do ... wordle...? with file input
      and file output.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]){
    char buffer[1024];
    char *words[100];
    int wordCount = 0;
    srand(time(NULL)); //Initialize random number generator
    int random;

    // Check for correct number of arguments
    if (argc != 3){
        printf("\nUSAGE: --- ./a.out <file input> <file output> ---\n\n");
        return -1;
    }


    // Open files and check for valid pointer
    FILE *fin = fopen(argv[1], "r"); //Read file, file must exist
    if (fin == NULL){
        fprintf(stderr, "\n--- Error opening file %s ---\n\n", argv[1]);
        return -1;
    }
    FILE *fout = fopen(argv[2], "a"); //Append creates file if it doesn't exist
    if (fout == NULL){
        fprintf(stderr, "\n--- Error opening file %s ---\n\n", argv[2]);
        return -1;
    }
    

    // Read in words from file and store them in words[] array
    while (fgets(buffer, sizeof(buffer), fin) != NULL){
        words[wordCount] = buffer; //Put word into word array
        if (words[wordCount] == NULL){
            fprintf(stderr, "\n--- Error reading line ---\n\n");
            return -1;
        }
        wordCount++;
    }


    // Choose a random word from the list as the wordle word
    random = rand() % wordCount + 1;
    char* word = words[random];
    int wordLength = strlen(word);
    int guesses = 5;

/*
Start
*/

    printf("\t\t-=- W O R D L E -=-\n");
    printf("\t =O=------------=O=------------=O=\n\n");
    printf("The word has %d letters. You have 5 guesses. Good luck!\n\n", wordLength);


    //while (guesses != 0){

    //    guesses--;
    //}

/*
End
*/
    // Close file descriptors and clean up memory
    fclose(fin);
    fclose(fout);

    return 0;
}