#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main() {
    FILE *file = fopen("non_existent_file.txt", "r");
    
    if (file == NULL) {
        // An error occurred during fopen, check errno
        if (errno == ENOENT) {
            // ENOENT indicates "No such file or directory"
            perror("fopen");
            printf("File not found.\n");
        } else {
            perror("fopen");
            printf("Failed to open the file.\n");
        }
    } else {
        // File opened successfully
        printf("File opened successfully.\n");
        // Don't forget to close the file when done
        fclose(file);
    }

    return 0;
}
