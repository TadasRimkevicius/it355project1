#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Node{
        int val;
    };

    struct Node a;
    a.val = 20;

    struct Node b;
    b.val = 30;

    if (a.val == 20 && b.val == 30){
        printf("A = 20, B = 30");
    }
    else{
        printf("A =/= 20 or B =/= 30");
    }

    return 0;
}