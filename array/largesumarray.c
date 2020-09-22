//program in C to find the largest sum of contiguous subarray of an array
//contiguous sub array
// 0(n*n) comlecxity 

#include <stdio.h>
void main (){
    int a[9]={ -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int i, j, sum, max = 0;

    printf("\nThe given array is : ");
    for( i = 0; i < 9; i++ )
        printf("%d  ",a[i]);

    printf("\n");
    for ( i = 0; i < 9; i++ ){
        sum = 0;
        for( j = i; j < 9; j++ ){
            sum = sum + a[j];
            if( sum > max )
                max = sum;
        }
    }
    printf ("\nThe largest sum of contiguous subarray of an array : %d\n",max);
}    
