#include<stdio.h>
// find sum of left diagonals sum in square matrix
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
    // addition of left diagonal element   
    int b = 0;
    for( i = 0; i < n; i++ ){
        sum = sum + a[i][b];
        b++;
    }
    printf("\nAdditiom of the left diagonal element is : %d\n",sum);
}
