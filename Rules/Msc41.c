#include <stdio.h>
#include <stdlib.h>

int main() {
    // Retrieve the sensitive information (e.g., password) from an environment variable
    const char *password = getenv("MY_APP_PASSWORD");

    if (password == NULL) {
        // Handle the case where the environment variable is not set
        fprintf(stderr, "Password not found in environment variables\n");
        return 1;
    }

    // Use the retrieved password for authentication or other sensitive operations
    printf("Password: %s\n", password);

    // Zero out the password from memory when done with it, to minimize exposure
    size_t password_len = strlen(password);
    memset((void *)password, 0, password_len);

    return 0;
}
