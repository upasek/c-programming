#include<stdio.h>
void main(){
    // Write a program in C to find out the maximum difference between any two elements such that larger element appears after the smaller number.
    int a[] = {7, 9, 5, 6, 13, 2};
    int i, b;
    printf("\nThe given array is :");
    int max = a[0];
    for( i = 0; i < 6; i++ ){
        printf(" %d ",a[i]);
        if( max < a[i]){
            max = a[i];
            b = i;
        }
    }
    int min = a[0];
    for( i = 0; i < b; i++ ){
        if( min > a[i] )
            min = a[i];
    }
    printf("\nThe elements which provide maximum difference is: %d, %d\n",min,max);
    printf("\nThe Maximum difference between two elements in the array is: %d\n",max-min);
}
