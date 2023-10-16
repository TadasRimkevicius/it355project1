#include <stdio.h>

int main(void){
    const char *message = "Test message";
    int message2 = 1;
    
    //First parameter is a string, matches %s
    printf("%s %d", message, message2);
}

