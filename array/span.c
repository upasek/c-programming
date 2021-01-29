#include<stdio.h>
void main(){
    //Write a program in C to return the largest span found in the leftmost and rightmost appearances of same value(values are inclusive) in a given array. 
    int a[] = {17, 42, 19, 7, 27, 24, 17, 54, 42};
    int i, j, max = 0, d;
    printf("\nThe given array is:");
    for( i = 0; i < 9; i++ )
        printf(" %d ",a[i]);

    for( i = 0; i < 9; i++ ){
        for( j = 8; j >= 0; j-- ){
            if( a[i] == a[j]){
                d = (j+1) - i;
                if( d > max )
                    max = d;
            }
        }  
    }
    printf("\nThe span between the same values in the array is: %d\n",max);
}
