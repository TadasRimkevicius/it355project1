#include <stdio.h>

int main(){
    size_t length = 10;
    char myString[] = "HelloWorld";
    char myOtherString[length];
    for(size_t i = 0; i < length; i++){
        myOtherString[i] = myString[i];
    }   
    myOtherString[length] = '\0';
    printf(myOtherString);
}