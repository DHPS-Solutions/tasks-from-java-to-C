#include <stdio.h>
#include <stdlib.h>

int main() {
    int teller[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int tilfeldigTall;
    for (int i = 0; i < 10000; i++) {
        tilfeldigTall = rand() % 10;
        teller[tilfeldigTall] += 1;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d %s", teller[i], "\n");
    }
}