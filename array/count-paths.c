/* Write a program in C to Count all possible paths from top left to bottom right of a m X n matrix.*/
#include<stdio.h>
int main(){
    int a[20][20];
    int n, m, i, j; 
    
    printf("Enter the number of rows : ");
    scanf("%d",&n); 
    printf("Enter the number of column : ");
    scanf("%d",&m);
    
    for( j = 0; j < m; j++ )
        a[0][j] = 1;

    for( i = 0; i < n; i++ )
        a[i][0] = 1;

    for( i = 1; i < n; i++ ){
        for( j = 1; j < m; j++ ){
            a[i][j] = a[i-1][j] + a[i][j-1];
        } 
    }
    printf("\nThe all possible paths from top left to bottom right is:  %d\n", a[n-1][m-1]);
    return 0;
}
