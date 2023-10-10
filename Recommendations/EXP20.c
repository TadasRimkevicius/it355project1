#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size = 5;
    arr = (int *)malloc(size * sizeof(int));

    //Check if arr was allocated properly, check if arr == NULL
    if (arr == NULL){
        fprintf(stderr, "arr was not allocated correctly");
        return -1;
    }

    for (int i = 0; i < size; i++){
        arr[i] = i;
    }

    printf("Size of array: %d\n", size);
    for (int i = 0; i < size; i++){
        printf("arr[%d] = %d\n", i , arr[i]);
    }

    return 0;
}