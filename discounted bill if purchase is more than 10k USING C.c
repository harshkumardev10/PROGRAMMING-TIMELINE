#include <stdio.h>
int main() {
    int shop, discount, bill;
    printf("enter shopping value:");
    scanf("%f", &shop);
    if (shop > 10000)
        discount = shop * 0.10;
    else 
        discount = shop * 0.05;
    bill = shop - discount;
    printf("final bill amount = %.2f",  bill);
return 0;
}