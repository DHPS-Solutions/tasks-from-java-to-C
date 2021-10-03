#include <stdio.h>

int main(void)
{

    float ratio = 2.54;

    float inches = 1;
    printf("Give integer in centimeters ");
    scanf("%f", &inches);

    float centimeters = inches * ratio;

    printf("%.2f\n", centimeters);

    return 0;
}
