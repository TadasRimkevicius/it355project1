#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numberPointer;
    numberPointer = (int *)malloc(sizeof(numberPointer));
    *numberPointer = 2023;
    printf("%d\n", *numberPointer);
}

