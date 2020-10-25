#include<stdio.h>
void main(){
    // 84 Write a program in C to find the minimum distance between two numbers in a given array.
    // The minimum distance between 7 and 11 
    int a[] = {7, 9, 5, 1, 7, 4, 11, 6, 2, 11};
    int i, j, b = 7, c = 11, max = 10, min = 10, d, e, k;
    printf("\nThe given array is:");
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);

    for( i = 0; i < 10; i++ ){

        if( a[i] == b ){
            for( j = i+1; j < 10; j++ ){
                if( a[j] == c){
                    d = j - i;
                    if( d < max )
                        max = d;
                }
            }
        }

        else if( a[i] == c ){
            for( k = i+1; k < 10; k++ ){
                if( a[k] == b){
                    e = k - i;
                    if( e < min )
                        min = e;
                }
            }
        }
    }
    if(  max < min  )
        printf("\nThe minimum distance between 7 and 11 is: %d\n",max);
    else 
        printf("\nThe minimum distance between 7 and 11 is: %d\n",min);
}
