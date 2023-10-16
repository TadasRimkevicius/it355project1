#include <stdio.h>

int main(){
    if(fclose(stdout) == EOF){
        return -1;
    }
}

