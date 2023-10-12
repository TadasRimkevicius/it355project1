#include <stdio.h>
#include <stdint.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr[2];  // Pointer to the third element of arr

    // Safe operations with pointers
    int *new_ptr = ptr + 1; // Move to the next element
    int value = *new_ptr;   // Access the value (4)

    printf("Value: %d\n", value);

    return 0;
}
