#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[], char *envp[]) {
    char *user = getenv("USER"); // Retrieve the USER environment variable
    if (user != NULL) {
        printf("User: %s\n", user);
    } else {
        printf("USER environment variable is not set.\n");
    }
    // setting an environment variable
    char newEnvVar[] = "MY_ENV_VAR=Hello, World!";
    if (putenv(newEnvVar) != 0) {
        perror("putenv() failed");
        return 1;
    }
    // Display the updated environment variable
    char *myEnvVar = getenv("MY_ENV_VAR");
    if (myEnvVar != NULL) {
        printf("MY_ENV_VAR: %s\n", myEnvVar);
    } else {
        printf("MY_ENV_VAR environment variable is not set.\n");
    }
    return 0;
}
