#include<stdio.h>
void main(){
    int i, j, n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    for( i = n; i >= 1; i-- ){
        for( j = 1; j <= i; j++ ){
            printf("*");
        }
        printf("\f");
    }
    for( i = 1; i <= n; i++ ){
        for( j = 1; j <= i; j++ ){
            printf("*");
        }
        printf("\f");
    }
}
