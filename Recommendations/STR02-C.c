#include <stdio.h>
#include <string.h>

int main(){
    // create list of unwanted characters
    const char badChars[] = ".!,;/";
    size_t length = strlen(badChars);
    char sampleTestInput[] = "This is a sample input!";
    int badCharFlag = 0;
    // check the string for bad characters
    for(size_t i = 0; i < length; i++){
        if(strchr(sampleTestInput, badChars[i]) != NULL)
            badCharFlag = 1;
    }
    printf("Bad character flag: %d\n", badCharFlag);
}

