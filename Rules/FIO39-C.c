#include <stdio.h>

int main() {
    char data[32];
    char append_data[32] = "data to be added";
    char file_name[32];
    FILE *file;

    scanf("%s",file_name);
    file = fopen(file_name, "a+");

    if (file == NULL) {
        return -1;
    }

    if (fwrite(append_data, 32, 1, file) != 32) {
        return -1;
    }

    //Fseek used between fwrite and fread functions
    if (fseek(file, 0L, SEEK_SET) != 0) {
        return -1;
    }

    if (fread(data, 32, 1, file) != 0) {
        return -1;
    }

    if (fclose(file) == EOF) {
        return -1;
    }
}


