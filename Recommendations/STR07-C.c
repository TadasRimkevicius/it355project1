#include <stdio.h>
#include <string.h>

int main(){
    char myString[100] = "This is my string";
    char mySmallerString[5] = "small";
    int goodCopyFlag = 0;
    // use strcpy_s when copying strings
    goodCopyFlag = strcpy_s(mySmallerString, sizeof(mySmallerString), myString);
    printf("Good copy flag: %d\n", goodCopyFlag);
}

