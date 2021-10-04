#include <stdio.h>

int main() {
    int year;
    printf("What year is it? ");
    scanf("%d", &year);

    if (year % 100 == 0 && year % 400 == 0) {
        printf("Leap year\n"); 
    } else if (year % 4 == 0) { 
        printf("Leap year\n");
    } else {
        printf("Not leap year\n");
    }
}
