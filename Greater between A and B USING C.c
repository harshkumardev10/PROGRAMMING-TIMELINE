
#include <stdio.h>
int main() {
    int A, B;
    printf("Enter value of A: ");
    scanf("%d", &A);
    printf("Enter value of B: ");
    scanf("%d", &B);
    if (A > B) {
        printf("A is greater than B");
    } else if (B > A) {
        printf("B is greater than A");
    } else {
        printf("A and B are equal");
    }
    return 0;
}