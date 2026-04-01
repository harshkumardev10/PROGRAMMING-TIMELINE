#include <stdio.h>
int main() {
    int i, j, N = 5;
    for(i = 1; i <= N; i++) {
        printf("*");
        for(j = 1; j <= (N + 1 - i); j++) {
            printf(" ");
        }
            printf("*\n");
    }
return 0;
}
