#include <stdio.h>
int main() {
    int num;
    printf("enter number :");
    scanf("%d", &num);
    if (num%2==0)
        printf("yes");
    else
        printf("no");
return 0;
}