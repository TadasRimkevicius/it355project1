#include <stdio.h>
#include <stdlib.h>

int main(){
    int * ptr;
    ptr = (int *)malloc(5 * sizeof(int));

/* initialize array to 0*/
    for (int i = 0; i < 5; i++){
        ptr[i] = 0;
    }

/* print out array - will result in random values if not initialized*/
    for (int i = 0; i < 5; i++){
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }
    return 0;
}