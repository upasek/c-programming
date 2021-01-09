#include<stdio.h>
// find sum of right diagonals sum in square matrix
void main(){
    int a[20][20], n, i, j, sum=0;
    printf("\nEnter the size of square matrix :\n");
    scanf("%d",&n);
    // takr input from user 
    printf("Enter the element in array :\n");
    for( i = 0; i < n; i++ ){
        for( j = 0; j < n; j++ )
            scanf("%d",&a[i][j]);        
    }
    // addition of right diagonal element   
    int b = n - 1;
    for( i = 0; i < n; i++ ){
        sum = sum + a[i][b];
        b--;
    }
    printf("\nAdditiom of the right diagonal element is : %d\n",sum);
}
