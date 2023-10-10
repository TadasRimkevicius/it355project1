#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0;
    int b = 0;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter a second number: ");
    scanf("%d", &b);

    /* If the condition was a = b, program will
        ALWAYS print out "They are equal."     */
    if (a == b){
        printf("They are equal.\n");
    }
    else{
        printf("They are not equal.\n");
    }
    return 0;
}