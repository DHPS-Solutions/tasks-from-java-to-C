// this task is explicitly meant to be solved using classes,
// however I will be using struct's instead.
#include <stdio.h>

struct Fraction {
    int numerator;
    int denominator;
};

struct Fraction newFraction(int num, int den) {
    struct Fraction res = { .numerator = num, .denominator = den };
    return res;
}

void printFraction(struct Fraction F) {
    printf("%d/%d\n", F.numerator, F.denominator);
}

struct Fraction addFractions(struct Fraction F1, struct Fraction F2) {
    // naive method
    struct Fraction res;
    int commonDenominator = F1.denominator * F2.denominator;
    res.numerator = F1.numerator * F2.denominator + F2.numerator * F1.denominator;
    res.denominator = commonDenominator;
    return res; 
}

struct Fraction subtractFractions(struct Fraction F1, struct Fraction F2) {
    struct Fraction res;
    int commonDenominator = F1.denominator * F2.denominator;
    res.numerator = F1.numerator * F2.denominator - F2.numerator * F1.denominator;
    res.denominator = commonDenominator;
    return res; 
}

struct Fraction multiplyFractions(struct Fraction F1, struct Fraction F2) {
    struct Fraction res = { .numerator = F1.numerator * F2.numerator, .denominator = F1.denominator * F2.denominator };
    return res;
}

struct Fraction divideFractions(struct Fraction F1, struct Fraction F2) {
    struct Fraction res = { .numerator = F1.numerator * F2.denominator, .denominator = F1.denominator * F2.numerator };
    return res;
}

int main() {
    // declare Fractions
    struct Fraction F1;
    struct Fraction F2;
    // initialize fractions 
    F1 = newFraction(1, 2);
    F2 = newFraction(2, 3);

    struct Fraction F3 = addFractions(F1, F2);
    struct Fraction F4 = subtractFractions(F1, F2);
    struct Fraction F5 = multiplyFractions(F1, F2);
    struct Fraction F6 = divideFractions(F1, F2);
  
    // print resulting fractions of arithmetic operations 
    printf("F1: "); 
    printFraction(F1);
    printf("F2: "); 
    printFraction(F2);

    printf("F1 + F2 = ");
    printFraction(F3);
    printf("F1 - F2 = ");
    printFraction(F4);
    printf("F1 * F2 = ");
    printFraction(F5);
    printf("F1 / F2 = ");
    printFraction(F6);

}
