#include<stdio.h>
void main(){
    // Write a program in C to replace every element with the greatest element on its right side.
    int a[] = {7, 5, 8, 9, 6, 8, 5, 7, 4, 6};
    int i, k, j, b, temp, c = 0, z[10];
    printf("\nThe given array is : ");
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);
    printf("\n");
    printf("\nAfter replace the modified array is: ");
    for( i = c; i < 10; i++ ){
        int max = a[i];
        for( j = i; j < 10; j++ ){
            if( max < a[j]){
                max = a[j];
                b = j;
            }
        }
        a[b] = 0;
        for( k = c; k < b; k++ ){
            a[k] = max;
        }
        c = b;
    }
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);
    printf("\n");
}

