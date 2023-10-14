#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numberPointer;
    numberPointer = (int *)malloc(sizeof(numberPointer));
    int x = 1;
    *numberPointer = 2023 + x;
    printf("%d\n", *numberPointer);
    // only free numberPointer, x is statically allocated
    free(numberPointer);
}

