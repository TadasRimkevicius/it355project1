#include <stdio.h>

int main(){
    signed char signedChar = -128;
    printf("This is my signed char: %d\n", signedChar);
    // convert to unsigned char before converting to int
    unsigned char unsignedChar = (unsigned char) signedChar;
    printf("This is my unsigned char: %d\n", unsignedChar);
    int integer = (int) unsignedChar;
    printf("This is my int: %d\n", integer);
}

