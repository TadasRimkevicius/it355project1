#include <math.h>
#include <stdio.h>

int main(){
    float input = -5;

    //Domain checking
    if(input < 0){
        return -1;
    }else{
        printf("%f",sqrt(input));
    }   
}

