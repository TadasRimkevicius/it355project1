#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    // Specify the command to be executed and its arguments
    const char* command = "ls";
    const char* arg1 = "-l";
    const char* arg2 = "/path/to/directory";

    // Execute the command
    if (execlp(command, command, arg1, arg2, (char *)NULL) == -1) {
        perror("execlp");
        exit(EXIT_FAILURE);
    }

    return 0;  // This line won't be reached if exec is successful.
}
