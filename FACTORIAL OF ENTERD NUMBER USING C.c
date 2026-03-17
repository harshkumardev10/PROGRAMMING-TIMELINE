#include <stdio.h>
int main(){
    int n;
    long fact = 1;
    printf("enter number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        fact = fact * i;
     }
 printf("Factorial of %d = %ld",n, fact);
return 0;
}
// FACTORIAL OF 0 IS 1...