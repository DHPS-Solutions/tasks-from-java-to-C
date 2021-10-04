#include <stdio.h>

int toSeconds(int hours, int minutes, int seconds) {
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    return totalSeconds;
}

int main() {
    // test data
    int h = 4;
    int m = 22;
    int s = 59;

    int res = toSeconds(h, m, s);
    printf("%d seconds\n", res);

    return 0;
}
