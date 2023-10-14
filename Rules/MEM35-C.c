#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numberArrayPointer;
    int numberOfElements = 3;
    numberArrayPointer = (int*)malloc(numberOfElements * sizeof(int));
    for(int i = 0; i < numberOfElements; i++){
        numberArrayPointer[i] = i;
        printf("%d\n",numberArrayPointer[i]);
    }
}

