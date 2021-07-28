#include<stdio.h>
void main(){
    //Write a program in C to find the two repeating elements in a given array.
    //complexity o(n*n)
    //by using nested looping
    int a[7] = {2, 7, 4, 7, 8, 3, 4};
    int i, j;
    printf("\nThe given array is : ");
    for( i = 0; i < 7; i++ )
        printf(" %d ",a[i]);
    printf("\nThe repeating elements are:");
    for( i = 0; i < 7; i++ ){
        for( j = i+1; j < 7; j++ ){
            if( a[i] == a[j]){
                printf(" %d ",a[i]);
            }
        }
    }
    printf("\n");
}
