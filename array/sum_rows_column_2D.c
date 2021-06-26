#include<stdio.h>
// finding the sum of rows and column in square matrix
void main(){
    int a[20][20], n, i, j;
    // teke no. of rows and column 
    printf("\nEnter the rows and column of square matrix :\n");
    scanf("%d",&n);
    printf("Enter the element in array :\n");
    for( i = 0; i < n; i++ ){
        for( j = 0; j < n; j++ )
            scanf("%d",&a[i][j]);
    }
    printf("\nAddition of rows element .....\n");
    for( i = 0; i < n; i++ ){
        int sum = 0;
        for( j = 0; j < n; j++ )
            sum = sum + a[i][j];                 
        printf("The sum of i = %d row is %d \n",i,sum);  
    }
    printf("Addition of column element.....\n");
    for( j = 0; j < n; j++ ){
        int sum = 0;
        for( i = 0; i < n; i++ )
            sum = sum + a[i][j];
        printf("The sum of j = %d column is %d\n",j,sum);
    }
}
