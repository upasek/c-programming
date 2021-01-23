#include<stdio.h>
void main(){
    //Write a program in C to segregate 0s and 1s in an array.
    int a[] = {1, 1, 1, 1, 1, 1, 1, 0, 0};
    int i, j, temp, b = 0, c  ;
    printf("\nThe given array is:");
    for( i = 0; i < 9; i++ )
        printf(" %d ",a[i]);

    for( i = 0; i < 9; i++ ){
        if( a[b] == 1){
            int temp = a[b];
            for( j = b; j < 9; j++ ){
                a[j] = a[j+1];
            }
            a[8] = temp;
        }
        else if( a[b] != 1 ){
            b++;
        }
    }
    printf("\nThe array after segregation is: ");
    for( i = 0; i < 9; i++ )
        printf(" %d ",a[i]);
    printf("\n");
}
