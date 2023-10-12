#include <stdio.h>
#include <openssl/rand.h>
#include <time.h>
int main() {
    // Initialize the OpenSSL PRNG
    if (RAND_status() != 1) {
        fprintf(stderr, "OpenSSL PRNG not properly initialized\n");
        return 1;
    }
    unsigned char seed[64];  // Adjust the size as needed

    if (RAND_bytes(seed, sizeof(seed)) != 1) {
        fprintf(stderr, "Failed to generate a secure seed\n");
        return 1;
    }
    printf("Generated Seed (hex): ");
    for (int i = 0; i < sizeof(seed); i++) {
        printf("%02x", seed[i]);
    }
    printf("\n");

    return 0;
}
