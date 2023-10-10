#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input_word[20];
    printf("Enter a word: \n");
    scanf("%s", &input_word);

    /* Check if input is empty*/
    if (input_word == NULL){
        return -1;
    }

    size_t size = strlen(input_word) + 1;
    char *message = (char *)malloc(size);

    /* Check if malloc was successful*/
    if (message == NULL){
        return -1;
    }

    for (int i = 0; i < size; i++){
        message[i] = toupper(input_word[i]);
    }

    printf("Message: %s\n", message);

    return 0;
}