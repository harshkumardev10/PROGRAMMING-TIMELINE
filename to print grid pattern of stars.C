#include <stdio.h>
int main(){
    int N,M;
    printf("Enter value of row :");
    scanf("%d", &N);
    printf("Enter value of column :");
    scanf("%d", &M);
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++ ){
        printf("* ");
    }
    printf("\n");
}
return 0;
}
