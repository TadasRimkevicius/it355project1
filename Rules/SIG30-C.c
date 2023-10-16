#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

volatile sig_atomic_t eflag = 0;

//Asynchronous-safe
void handler(int signum) {
    eflag = -1;
}

int main(void) {
    //declaration of interrupt behavior
    if (signal(SIGINT, handler) == SIG_ERR) {

    }
    
    //main program flow
    while(!eflag){

    }
    
    fputs("exiting",stdout);
    return 0;
}

