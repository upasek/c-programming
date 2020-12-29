#include<stdio.h>
void main(){
    // Write a program in C to rearrange an array in such an order that– smallest, largest, 2nd smallest, 2nd largest and on.
    //The given array is:
    //5 8 1 4 2 9 3 7 6
    //The new array is:
    //1 9 2 8 3 7 4 6 5
    int a[] = { 5, 8, 1, 4, 2, 9, 3, 7, 6};
    int i, b[20], j, k, c, d, temp;
    printf("\nThe given array is:");
    for( i = 0; i < 9; i++ )
        printf(" %d ",a[i]);
    for( i = 0; i < 8; i++ ){

        if( i%2 != 0 ){
            int max = a[i];
            for( j = i+1; j < 9; j++ ){
                if( max < a[j] ){
                    max = a[j];
                    d = j;
                }
            }
            temp = a[i];
            a[i] = max;
            a[d] = temp;

        }
        else if( i%2 == 0){
            int min = a[i];
            for( k = i+1; k < 9; k++ ){
                if( min > a[k]){
                    min = a[k];
                    c = k;
                }
            }
            temp = a[i];
            a[i] = min;
            a[c] = temp;
        }
    }
    printf("\nThe new array is:");
    for( i = 0; i < 9; i++ )
        printf(" %d ",a[i]);
            printf("\n");
}
