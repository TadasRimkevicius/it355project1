#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <stdlib.h>

int main() {
    double number = -1.0;
    double result;
    errno = 0; // Clear errno before using it.

    result = sqrt(number);

    if (errno != 0) {
        if (errno == EDOM) {
            fprintf(stderr, "Error: Domain error - Input is negative\n");
        } else if (errno == ERANGE) {
            fprintf(stderr, "Error: Range error - Result is out of representable range\n");
        } else {
            perror("Error");
        }
    } else {
        printf("Square root: %f\n", result);
    }

    return 0;
}
