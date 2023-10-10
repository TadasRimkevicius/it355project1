#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char str[10];

    /* open file */
    fp = fopen("test.txt", "r");
    
    /* check for error*/
    if (fp == NULL){
        perror("Error opening file");
        return -1;
    }
    
    /* Check for invalid pointer*/
    if (fgets(str, 10, fp) != NULL){
        printf("%s\n", str);
    }
    fclose(fp);
    
    return 0;
}