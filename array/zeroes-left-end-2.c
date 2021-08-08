#include<stdio.h>
void main(){
    // Write a program in C to move all zeroes to the end of a given array. 
    int a[] = { 2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
    int i, j, count = 0;
    printf("\nThe given array is :");
    for( i = 0; i < 10; i++ ){
        printf(" %d ",a[i]);
        if( a[i] == 0 )
            count++;
    }
    printf("\nNumber of zeros in array : %d",count);
    for ( i = 0; i < 9; i++ ){
            if( a[i] == 0  ){
              int  temp = a[i];
                for( j = i; j < 9; j++ ){
                   a[j] = a[j+1];
                }
                a[9] = temp;
            }
        }
    printf("\nThe new array is:");
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);
    printf("\n");
}

