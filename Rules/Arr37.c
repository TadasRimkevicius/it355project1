#include <stdio.h>

int main() {
    int value = 42;
    int *ptr = &value;
    
    // Adding an integer to a pointer to a non-array object
    int *newPtr = ptr + 1;
    
    printf("Value: %d\n", *newPtr);  // Undefined behavior
    return 0;
}
