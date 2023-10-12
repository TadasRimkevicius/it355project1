#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;

    // Attempt to allocate memory for an integer array
    size_t size = 1000;
    arr = (int *)malloc(size * sizeof(int));

    // Check if malloc() was successful in allocating memory
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;  // Return an error code
    }

    // Use the allocated memory
    // free the allocated memory when done
    free(arr);

    return 0;
}
