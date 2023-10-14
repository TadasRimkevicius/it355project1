#include <stdio.h>
#include <stdlib.h>

int main() {
    // Database configuration
    char* db_host = getenv("MYAPP_DB_HOST");
    char* db_port = getenv("MYAPP_DB_PORT");
    char* db_user = getenv("MYAPP_DB_USER");
    char* db_password = getenv("MYAPP_DB_PASSWORD");

    // Email server configuration
    char* email_host = getenv("MYAPP_EMAIL_HOST");
    char* email_port = getenv("MYAPP_EMAIL_PORT");
    char* email_username = getenv("MYAPP_EMAIL_USERNAME");
    char* email_password = getenv("MYAPP_EMAIL_PASSWORD");

    if (db_host && db_port && db_user && db_password) {
        printf("Database Configuration:\n");
        printf("Host: %s\n", db_host);
        printf("Port: %s\n", db_port);
        printf("User: %s\n", db_user);
        printf("Password: %s\n", db_password);
    } else {
        printf("Database environment variables are not properly set.\n");
    }

    if (email_host && email_port && email_username && email_password) {
        printf("\nEmail Server Configuration:\n");
        printf("Host: %s\n", email_host);
        printf("Port: %s\n", email_port);
        printf("Username: %s\n", email_username);
        printf("Password: %s\n", email_password);
    } else {
        printf("\nEmail server environment variables are not properly set.\n");
    }

    return 0;
}
