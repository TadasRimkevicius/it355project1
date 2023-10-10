#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 5;
    //Putting a semicolon after (a == 5) will cause the
    //      if block to not run.
    if (a == 5) {
        printf("This should print\n");
    }
    printf("This is the second line\n");

    return 0;
}