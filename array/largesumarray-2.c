//Write a program in C to find the largest sum of contiguous subarray of an array
//contiguous sum
// 0(n) complecxity

#include<stdio.h>
void main(){
    int a[9] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int i, sum = 0, max = 0;
    printf("The given array is : ");
    for( i = 0; i < 9; i++ )
        printf("%d  ",a[i]);
    for( i = 0; i < 9; i++){
        sum = sum + a[i];
        if ( sum < 0 )
            sum = 0;
        if( sum > max)
            max = sum;
    }
    printf("\nThe largest sum of contiguous subarray is : %d\n",max);
}
