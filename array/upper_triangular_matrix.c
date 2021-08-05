#include<stdio.h>
// finding upper triangular matrix 
void main(){
    int a[20][20], i, j, n;
    printf("\nEnter the numner of rows and cloumn of square matrix :\n");
    scanf("%d",&n);
    printf("Enter the element in matrix :\n");
    for( i = 0; i < n; i++ ){
        for( j = 0; j < n; j++ )
            scanf("%d",&a[i][j]);
    }
    // make upper triangular matrix
    for( i = 0; i < n-1; i++ ){
        for( j = i+1; j < n; j++ )
            a[i][j] = 0;
    }
    printf("\nupper triangular matrix.....\n");
    for(  i = 0; i < n; i++ ){
        for ( j = 0; j < n; j++ )
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}
