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
    int yn = 1;
    for( i = 0; i < n; i++ ){
        for( j = 0;  j < n; j++ ){
            if( a[i][j] != 1 && a[j][i] !=0 ){
                yn = 0;
                break;
            }
        }
    }
    printf("\nThe matrix is....\n");
    for( i = 0; i < n; i++ ){
        for( j = 0; j < n; j++ )
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    if( yn == 1 )
        printf("The matrix is an identity matrix\n");
    else
        printf("The matrix is not an identity matrix \n");
}

