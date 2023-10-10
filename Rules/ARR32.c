#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int *ptr;

    printf("Enter a size: ");
    scanf("%d", &size);

    /* check for valid size*/
    if (size <= 0){
        printf("Invalid size\n");
        return -1;
    }
    else{
        ptr = (int *)malloc(size * sizeof(int));
        for (int i = 0; i < size; i++){
            ptr[i] = 0;
        }
    }
    
    /* print out the array*/
    for (int i = 0; i < size; i++){
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    return 0;
}