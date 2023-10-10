#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    arr = (int *)malloc(5 * sizeof(int));

    /* check if arr was allocated correctly
        by checking if arr == NULL */
    if (arr == NULL){
        printf("Allocation Error\n");
        return -1;
    }
    else{
        printf("Allocation Successful");
    }
    return 0;
}