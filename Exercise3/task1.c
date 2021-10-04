#include <stdio.h>

int main() {
    int start, end;
    printf("Start: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);
    
    for (int i = start; i <= end; i++) {
        for (int j = 0; j <= 10; j++) {
            int sum = i * j;
            printf("%d * %d = %d\n", i, j, sum);
        }
        printf("\n");
    }

    return 0;
}
