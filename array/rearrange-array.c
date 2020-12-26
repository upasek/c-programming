#include<stdio.h>
void main(){
    // Given an array of size n such that every element is in the range from 0 to n-1. Write a program in C to rearrange the given array so that arr[i] becomes arr[arr[i]].
    // Expected Output:
    // The Original array is
    // 2 1 4 3 0 The modified array is:
    // 4 1 0 3 2
    int a[] = { 2, 1, 4, 3, 0 };
    int i, j, b [20], temp;
    printf("\nThe Original array is : ");
    for( i = 0; i < 5; i++ )
        printf(" %d ",a[i]);

    for( i = 0; i < 5; i++ ){
        temp = a[i]; 
        b[i] = a[temp]; 
    }
    printf("\n\nThe modified array is:");
    for( i = 0; i < 5; i++ )
        printf(" %d ",b[i]);
    printf("\n");
}
