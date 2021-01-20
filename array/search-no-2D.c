#include<stdio.h>
void main(){
    //Write a program in C to search an element in a row wise and column wise sorted matrix.
    int a[4][4] = {
        15, 23, 31, 39,
        18, 26, 36, 43,
        25, 28, 37, 48,
        30, 34, 39, 50
    };
    int i, j, num = 25;
    printf("\nThe given array in matrix form is :\n");
    for(i = 0; i < 4; i++ ){
        for( j = 0; j < 4; j++ )
            printf(" %d ",a[i][j]);
        printf("\n");
    }
    int k = 0, l = 3;
    while( k < 4 && l >= 0 ){
        if( a[k][l] == num ){
            printf("\nThe given value for searching is: %d ",num);
            printf("\nThe element Found at the position in the matrix is: %d, %d\n",k,l);
            break;
        }
        if( num < a[k][l] )
            l--;

        if( num > a[k][l] )
            k++;
    }
}
