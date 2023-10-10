/* Program designed to do [SOMETHING] with file input
      and file output.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    /*
    Check for correct number of arguments
    */
    if (argc != 3){
        printf("\nUSAGE: --- ./a.out <file input> <file output> ---\n\n");
        return -1;
    }

    /*
    Open files and check for valid pointer
    */
    FILE *fin = fopen(argv[1], "r"); //Read file, file must exist
    if (fin == NULL){
        fprintf(stderr, "--- Error opening file %s ---\n", argv[1]);
        return -1;
    }
    FILE *fout = fopen(argv[2], "a"); //Append creates file if it doesn't exist
    if (fout == NULL){
        fprintf(stderr, "--- Error opening file %s ---\n", argv[2]);
    }
    
    //Do Stuff


    //close file descriptors
    fclose(fin);
    fclose(fout);

    return 0;
}