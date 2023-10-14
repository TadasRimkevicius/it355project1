#include <stdio.h>
#include <string.h>

int main(){
    char myString[] = "This is the start, and this will be cut off";
    char* copyString = (char *)malloc(strlen(myString));
    strcpy(copyString, myString);
    strtok(myString, ",");
    printf(copyString);
}

