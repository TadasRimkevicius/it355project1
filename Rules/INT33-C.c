#include <stdio.h>

int main(){
    float a = 5;
    float b = 0;

    if(b == 0){
        printf("Division by 0 not allowed");
    }else{
        float result = a/b;
        printf("%f",result);
    }
}

