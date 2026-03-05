#include <stdio.h>

int main() {
    float p, r, t, si;
    printf("Enter P: ");
    scanf("%f", &p);
    printf("Enter R: ");
    scanf("%f", &r);
    printf("Enter T: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("S.I. = %.2f", si);
    return 0;
}