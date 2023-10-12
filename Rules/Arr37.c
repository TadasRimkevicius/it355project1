#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("data.txt", "wb"); // Open a binary file for writing
    
    if (file == NULL) {
        perror("fopen");
        return 1;
    }

    char data[] = "This is a data with a null character \0 in the middle.";
    size_t data_len = sizeof(data) - 1; // Exclude the null character

    size_t bytes_written = fwrite(data, 1, data_len, file);
    
    if (bytes_written != data_len) {
        perror("fwrite");
        fclose(file);
        return 1;
    }

    fclose(file);
    printf("Data has been written successfully.\n");
    
    return 0;
}
