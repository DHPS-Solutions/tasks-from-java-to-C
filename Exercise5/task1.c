// this task is explicitly meant to be solved using classes,
// however I will be using struct's instead.
#include <stdio.h>
#include <stdlib.h>

struct Fraction {
    int numerator;
    int denominator;
};

// not related, just tested returning an array of a struct
struct Fraction *meme(struct Fraction F1, struct Fraction F2) {
    struct Fraction *items = malloc(sizeof(struct Fraction) * 2);

    int minimum = (F1.denominator < F2.denominator) ? F1.denominator : F2.denominator;
    int commonDenominator = 0;

    for (int i=minimum; i >= 2; i--) {
        if (F1.denominator % i == 0 && F2.denominator % i == 0) {
            if (i / F1.numerator != 0 && i / F2.numerator != 0) {
                commonDenominator = i;
                break;
            }
        }
    }
    
    if (commonDenominator != 0) {
        items[0].numerator = F1.numerator / commonDenominator;
        items[0].denominator = commonDenominator;
        items[1].numerator = F2.numerator / commonDenominator;
        items[1].denominator = commonDenominator;
    } else {
        items[0] = F1;
        items[1] = F2;
    }
    return items;
}

struct Fraction simplifyFraction(struct Fraction F1) {
    struct Fraction res = F1;
    int commonDenominator = 0;

    for (int i=F1.denominator; i >= 2; i--) {
        if (F1.numerator % i == 0 && F1.denominator % i == 0) {
            commonDenominator = i;
            break;
        }
    }

    if (commonDenominator != 0) {
        res.numerator /= commonDenominator;
        res.denominator /= commonDenominator;
    }

    return res;

}

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
    return simplifyFraction(res); 
}

struct Fraction subtractFractions(struct Fraction F1, struct Fraction F2) {
    struct Fraction res;
    int commonDenominator = F1.denominator * F2.denominator;
    res.numerator = F1.numerator * F2.denominator - F2.numerator * F1.denominator;
    res.denominator = commonDenominator;
    return simplifyFraction(res);
}

struct Fraction multiplyFractions(struct Fraction F1, struct Fraction F2) {
    struct Fraction res = { .numerator = F1.numerator * F2.numerator, .denominator = F1.denominator * F2.denominator };
    return simplifyFraction(res);
}

struct Fraction divideFractions(struct Fraction F1, struct Fraction F2) {
    struct Fraction res = { .numerator = F1.numerator * F2.denominator, .denominator = F1.denominator * F2.numerator };
    return simplifyFraction(res);
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

    //struct Fraction *fractions = meme(F1, F6);
    //printFraction(fractions[0]);
    //printFraction(fractions[1]);

}
