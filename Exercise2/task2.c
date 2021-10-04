#include <stdio.h>

int main() {
    float priceA = 35.9;
    int weightA = 450;
    float priceB = 39.5;
    int weightB = 500;
    
    float pricePerGramA = priceA / weightA;
    float pricePerGramB= priceB / weightB;

    if (pricePerGramA > pricePerGramB) {
        printf("B is cheaper\n");
    } else if (pricePerGramA < pricePerGramB) {
        printf("A is cheaper\n");
    } else {
        printf("They are the same price");
    }

    return 0;
}
