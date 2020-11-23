#include<stdio.h>
void main(){
    // Write a program in C to find two numbers that occur odd number of times in an array.
    int a[] = {6, 7, 3, 6, 8, 7, 6, 8, 3, 3}; 
    int b[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int i, j;
    printf("\nThe given array is :");
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);
    printf("\nThe two numbers occuring odd number of times are:");
    for( i = 0; i < 10; i++ ){
        int count = 1;
        for( j = i + 1; j < 10; j++ ){
            if( a[i] == a[j] ){
                count++;
                b[j] = 0;
            }
        }
        if( count % 2 != 0 && b[i] != 0){
            printf(" %d ",a[i]);
        }
    }
    printf("\n");
}
