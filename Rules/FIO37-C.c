#include <stdio.h>
#include <string.h>

 int main() {
    char buf[32];
    char *p;

    //Specific example where a newline character needs to be stripped.
    //This rule mostly causes issues with strlen, so the solution
    //is to find ways to not use strlen
    if (fgets(buf, sizeof(buf), stdin)) {
        //Find first occurence of \n in buf
        p = strchr(buf, '\n');
        //If \n is found, dereference p and change that character
        //to \0
        if (p) {
            *p = '\0';
        }
    } else {
        return -1;
    }
}

