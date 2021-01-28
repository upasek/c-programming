#include<stdio.h>
void main(){
    //Write a program in C to sort an array of 0s, 1s and 2s.
    int a[] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
    int i, j, temp;
    printf("\nThe given array is :");
    for( i = 0; i < 12; i++ )
        printf(" %d ",a[i]);

    for( i = 0; i < 11; i++ ){
        int min = i;
        for( j = i + 1; j < 12; j++ ){
            if( a[min] > a[j]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("\nAfter sortig the elements in the array are:");
    for( i = 0; i < 12; i++ )
        printf(" %d ",a[i]);
    printf("\n");
}
