#include<stdio.h>
// finding lower triangular matrix 
void main(){
    int a[20][20], i, j, n;
    printf("\nEnter the numner of rows and cloumn of square matrix : ");
    scanf("%d",&n);
    printf("Enter the element in matrix : ");
    for( i = 0; i < n; i++ ){
        for( j = 0; j < n; j++ )
            scanf("%d",&a[i][j]);
    }
    // make lower triangular matrix
    for( i = 1; i < n; i++ ){
        for( j = 0; j < i; j++ )
            a[i][j] = 0;
    }
    printf("\nlower triangular matrix.....\n");
    for(  i = 0; i < n; i++ ){
        for ( j = 0; j < n; j++ )
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}
