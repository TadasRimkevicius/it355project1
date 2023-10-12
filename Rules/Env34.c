#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *source = "Hello, World!";
    
    // Good: Do not store the pointer returned by strdup
    const char *duplicate = strdup(source);
    
    if (duplicate != NULL) {
        // Use 'duplicate' as needed
        printf("Duplicate: %s\n", duplicate);
        
        // Free the dynamically allocated memory when done
        free(duplicate);
    } else {
        // Handle allocation failure
        perror("strdup");
    }

    return 0;
}
