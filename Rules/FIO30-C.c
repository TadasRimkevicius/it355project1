#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 char *msg;

 scanf("%s",msg);

 fputs(msg, stderr);

 free(msg);
}

