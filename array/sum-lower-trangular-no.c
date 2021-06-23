#include<stdio.h>
void main(){
    // Write a program in C to find the sum of upper triangular elements of a matrix.
    int a[20][20], i, j, n, sum = 0;
    printf("\nEnter the size of square array : ");
    scanf("%d",&n);
    printf("\nEnter the element in array :");
    for( i = 0; i < n; i++ ){
        for( j = 0; j < n; j++ )
            scanf("%d",&a[i][j]);
    }
    printf("\nThe given array is :\n");
    for( i = 0; i < n; i++){
        for( j = 0; j < n; j++ )
            printf(" %d ",a[i][j]);
        printf("\n");
    }
    printf("\nThe elements being summed of the lower triangular matrix are: ");
    for( i = 1; i < n; i++ ){
        for( j = 0; j < i; j++ ){
            sum = sum + a[i][j];
            printf(" %d ",a[i][j]);
        }
    }
    printf("\n\nThe Sum of the lower triangular Matrix Elements are: %d \n",sum);
}
