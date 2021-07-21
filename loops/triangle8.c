#include<stdio.h>
void main(){
    int i, k, j, n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    int a = 1;
    for( i = 1; i <= n; i++ ){
        for( k = n - 1; k >= i; k-- ){
           printf(" ");
        }
        for( j = 1; j <= i; j++ ){
            printf("%d ",a);
        }
        printf("\n");
        a++;
    }
}
