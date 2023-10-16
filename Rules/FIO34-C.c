#include <stdio.h>
int main(){
    int character;

    while (character != EOF){
        character = getchar();
    } 

    /*end of file*/
    if (feof(stdin)) {
        return -1;
    /*file error*/
    } else if (ferror(stdin)) {
        return -1;
    } else {
        return -1;
    }
}

