#include <stdio.h>
#include <stdlib.h>

int main(){

    int size = 4; //Keep track of size here
    int *arr;
    arr = (int *)malloc(size * sizeof(int)); 
    //Uses sizeof() for memory allocation

    for (int i = 0; i < size; i++){
        arr[i] = 0;
    }

    printf("Size of array: %d\n", size);
    for (int i = 0; i < size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}