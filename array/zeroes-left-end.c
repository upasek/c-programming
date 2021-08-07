#include<stdio.h>
void main(){
    // Write a program in C to move all zeroes to the end of a given array. 
    int a[] = { 2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
    int i, j = 0, count = 0, temp, m = 0, b = 9;
    printf("\nThe given array is :");
    for( i = 0; i < 10; i++ ){
        printf(" %d ",a[i]);
        if( a[i] == 0 )
            count++;
    }
    printf("\nNumber of zeros in array : %d",count);
    for ( i = 0; i < 9; i++ ){
        if ( j < count ){
            if( a[b] == 0 ){
                b--;
                j++;
            }
            if( a[i] == 0  ){
                temp = a[i];
                a[i] = a[b];
                a[b] = temp;
                b--;
                j++;
            }
        }
    }
    printf("\nThe new array is:");
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);
    printf("\n");
}
