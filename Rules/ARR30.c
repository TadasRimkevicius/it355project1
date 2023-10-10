#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index;

    printf("Enter an index: ");
    scanf("%d", &index);

    /* Checks for index out of bounds */
    if (index >= 0 && index < 10){
        printf("Arr[%d] = %d\n", index, arr[index]);
    }
    else{
        printf("Index out of bounds\n");
    }
    return 0;
}