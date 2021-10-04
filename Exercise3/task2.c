#include <stdio.h>

int main() {

    int integer;
    int isPrime = 1;

    printf("Input a positive integer: ");
    scanf("%d", &integer);

    for (int i = 2; i < integer; i++) {
        if (integer % i == 0) {
            printf("%d is not a prime number.\n", integer);
            isPrime = 0;
            break;
        }
    }
    if (integer == 1) {
        printf("%d is not a prime number.\n", integer);
        isPrime = 0;
    }

    if (isPrime == 1) {
        printf("%d is a prime number!\n", integer);
    }

    return 0;

}