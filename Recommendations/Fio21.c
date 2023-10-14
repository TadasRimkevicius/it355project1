#include <stdio.h>
#include <stdlib.h>

int main() {
    char tempDir[] = "/tmp/"; // Use a temporary directory specifically for temporary files
    char filename[] = "tempfile.txt";
    char path[256]; // Make sure this buffer is large enough to hold the full path

    snprintf(path, sizeof(path), "%s%s", tempDir, filename);

    // Create and open the temporary file in a safe directory
    FILE *file = fopen(path, "w");
    if (file == NULL) {
        perror("Error creating temporary file");
        exit(EXIT_FAILURE);
    }

    // Write data to the temporary file
    fprintf(file, "This is a temporary file.\n");

    // Close and remove the temporary file when done
    fclose(file);
    remove(path);

    return 0;
}
