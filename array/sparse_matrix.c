#include<stdio.h>
// finding the given matrix is sparse matrix or not
// sparse = number of zeros element > number of non zero element in matrix
void main(){
    int a[20][20], i , m, j, n;
    printf("\nEnter the number of row and column of  matrix :\n");
    scanf("%d%d",&n,&m);
    printf("Enter the element in array :\n");
    for( i = 0; i < n; i++ ){
        for( j = 0; j < m; j++ )
            scanf("%d",&a[i][j]);
    }
    int b = 0, c = 0;
    for( i = 0; i < n; i++ ){
        for( j = 0; j < m; j++ ){
            if( a[i][j] == 0)
                b++;
            else
                c++;                 
        }     
    }
    if( b > c )
        printf("\nThe given matrix is sparse matrix.\n");
    else
        printf("\nThe given matrix is not sparse matrix.\n");
    printf("There are %d number of zeros in the matrix\n",b);
}
