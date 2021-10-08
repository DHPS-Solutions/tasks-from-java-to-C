#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randint(int, int);

int main() {
    time_t t;
    srand((unsigned) time(&t));
    
    int frequency[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int r;
    for (int i=0; i < 10000; i++) {
        r = randint(1, 10);
        frequency[r-1] += 1;
    }
    
    printf("VERDIER\n");
    int len = sizeof(frequency) / sizeof(frequency[0]);
    for (int i=0; i < len; i++) {
        printf("%d\n", frequency[i]);
    }
}

int randint(int min, int max) {
    return rand() % (max - min + 1) + min;
}
