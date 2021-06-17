#include<stdio.h>
void main(){
    //Write a program in C to check whether an array is subset of another array.
    int a[] = {4, 8, 7, 11, 6, 9, 5, 0, 2}; 
    int b[] = { 5, 4, 2, 0, 6};
    int i, j, c = 0;
    printf("\nThe given first array is : ");
    for( i = 0; i < 9; i++ )
        printf(" %d ",a[i]);
    printf("\nThe given second array is : ");
    for( i = 0; i < 5; i++ )
        printf(" %d ",b[i]);

    for( i = 0; i < 5; i++ ){
        for( j = 0; j < 9; j++ ){
            if( b[i] == a[j] ){
                c++;
                break;
            }
        } 
    }
    if( c == 5)
        printf("\nThe second array is the subset of first array.\n");
    else
        printf("\nThe second array is not a subset of first array.\n");
}
