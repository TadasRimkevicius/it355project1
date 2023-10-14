#include <stdio.h>

int main(){
    char myString[] = "I need a null terminator";
    printf("%s\0", myString);
}