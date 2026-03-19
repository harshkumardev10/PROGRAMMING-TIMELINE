#include <stdio.h>
int main() {
    int a,b;
    printf("enter a and b:");
    scanf("%d %d", &a,&b);
    if (b % a == 0)
        printf("entered value divisble");
    else 
        printf("entered value not divisble");
return 0;
}