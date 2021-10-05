// this task is explicitely meant to be solved using classes,
// however I will be using struct's instead.
#include <stdio.h>

struct Fraction {
    int numerator;
    int denominator;
};

// function declaration
struct Fraction addFractions(struct Fraction F1, struct Fraction F2) {
    struct Fraction res;
    // naive method 
    int commonDenominator = F1.denominator * F2.denominator;
    res.numerator = F1.numerator * F2.denominator + F2.numerator * F1.denominator;
    res.denominator = commonDenominator;
    return res; 
}

void printFraction(struct Fraction F) {
    printf("%d/%d\n", F.numerator, F.denominator);
}

int main() {
    struct Fraction F1;
    struct Fraction F2;

    F1.numerator = 1;
    F1.denominator = 2;
    F2.numerator = 2;
    F2.denominator = 3;

    struct Fraction F3 = addFractions(F1, F2);
   
    printf("F1: "); 
    printFraction(F1);
    printf("F2: "); 
    printFraction(F2);
    printf("F1 + F2 = ");
    printFraction(F3);

}
