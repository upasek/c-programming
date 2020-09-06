#include<stdio.h>
//finding identity of matrix
void main(){
    int a[20][20], i, j, n;
    printf("\nEnter the number of rows and column of square matrix :\n");
    scanf("%d",&n);   
    printf("Enter the element in array :\n");
    for( i = 0; i < n; i++ ){
        for( j = 0; j < n; j++ )
            scanf("%d",&a[i][j]);
    }
    int b = 0,c = 0;
    for( i = 0; i < n; i++ ){
        for( j = 0;  j < n; j++ ){
            if( a[i][j] == 1 )
                b++;
            else if( a[i][j] == 0 )
                c++;
        }
    }
    printf("\nThe matrix is....\n");
    for( i = 0; i < n; i++ ){
        for( j = 0; j < n; j++ )
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    if( b == n || c == (n*n)-n )
        printf("The matrix is an identity matrix\n");
    else 
        printf("The matrix is not an identity matrix \n");
}
