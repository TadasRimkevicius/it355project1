#include <stdio.h>

int main(){
    // add null terminator when printing
    char myString[] = "I need a null terminator";
    // only myString will be printed
    printf("%s\0 garbage data", myString);
}  

