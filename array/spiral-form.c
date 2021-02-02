#include<stdio.h>
void main(){
    //Write a program in C to print a matrix in spiral form.
    //by looping 
    int a[4][5] = {
        1, 2, 3, 4, 5,
        6, 7, 8, 9, 10,
        11, 12, 13, 14, 15,
        16, 17, 18, 19, 20
    };  
    int i, j, dir = 0, top = 0, down = 3, left = 0, right = 4;
    printf("\nThe given array is : \n");
    for( i = 0; i < 4; i++ ){
        for( j = 0; j < 5; j++ )
            printf(" %d\t ",a[i][j]);
        printf("\n");
    }
    printf("\nThe spiral form of above matrix is :");
    while ( top < down && left < right ){

        for( i = left; i <= right; i++ )
            printf(" %d ",a[top][i]);
        top++;

        for( i = top; i <= down; i++ )
            printf(" %d ",a[i][right]);
        right--;

        for( i = right; i >= left; i--  )
            printf(" %d ",a[down][i]);
        down--;

        for( i = down; i >= top; i-- )
            printf(" %d ",a[i][left]);
        left++;
    }
    printf("\n");
}
