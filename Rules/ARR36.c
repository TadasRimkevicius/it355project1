#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    arr = (int *)malloc(10 * sizeof(int));

    size_t freeIndexes;

    /* both arr and &arr[10] reference the same object*/
    freeIndexes = &(arr[10]) - arr;
    printf("Free indexes: %d\n", freeIndexes);
    return 0;
}