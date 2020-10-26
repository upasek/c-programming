#include<stdio.h>                                           
void main(){
    // 84 Write a program in C to find the minimum distance between two numbers in a given           array.
    // The minimum distance between 7 and 11 
    int a[] = {7, 9, 5, 1, 7, 4, 5, 11, 2, 11};
    int i, j, b = 7, c = 11, min = 10, d;
    printf("\nThe given array is:");
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);
    for( i = 0; i < 10; i++ ){
        for( j = i+1; j < 10; j++ ){
            if( a[i] == b && a[j] ==c || a[i] == c && a[j] == b){
                d = j - i;
                if( d < min )
                    min = d;
            }
        }
    }        
    printf("\nThe minimum distance between 7 and 11 is: %d\n",min);
}
