#include <stdio.h>

struct time {
    int hours, minutes, seconds;
};

typedef struct time Time;

Time fromSeconds(int totalSeconds) {
    Time t;

    t.hours = totalSeconds / 3600;
    t.minutes = t.hours % 3600 / 60;
    t.seconds = t.hours % 3600 % 60;
    
    return t;
}

int main() {
    int seconds = 3601;
    Time res = fromSeconds(seconds);

    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n",
            res.hours, res.minutes, res.seconds);

    return 0;
}
