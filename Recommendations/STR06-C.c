#include <stdio.h>
#include <string.h>

int main(){
    char myString[] = "This is the start, and this will be cut off";
    // copy the string before using strtok()
    char* copyString = (char *)malloc(strlen(myString));
    strcpy(copyString, myString);
    strtok(myString, ",");
    printf(copyString);
}

