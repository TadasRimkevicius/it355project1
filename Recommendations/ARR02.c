#include <stdio.h>
#include <stdlib.h>

int main(){
    //Specify the array bounds, even though it's being initialized.
    int arr[5] = {0, 1, 2, 3, 4};

    printf("Size of array: 5");
    for (int i = 0; i < 5; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}