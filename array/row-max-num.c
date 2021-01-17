#include<stdio.h>
void main(){
    //Write a program in C to find the row with maximum number of 1s.
    int a[5][5] = {
        0, 1, 0, 1, 1,
        1, 1, 1, 1, 1,
        1, 0, 0, 1, 0,
        0, 0, 0, 0, 0,
        1, 0, 0, 0, 1
    };
    int i, j, max, b = 0;
    printf("\nThe given 2D array is :\n");
    for( i = 0; i < 5; i++ ){
        for( j = 0; j < 5; j++ )
            printf(" %d ",a[i][j]);
        printf("\n");
    }

    for( i = 0; i < 5; i++ ){
        int count = 0;
        for( j = 0 ; j < 5; j++ ){
            if( a[i][j] == 1)
                count++;
        }
        if( count > b ){
            b = count;
            max = i;
//          printf("The index of row with maximum 1s is: %d",max);
        }
    }
    printf("\nThe index of row with maximum 1s is: %d\n",max);
}
