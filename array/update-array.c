#include<stdio.h>
int main(){
    //Write a program in C to update every array element with multiplication of previous and next numbers in array.
    // The given array is:
    // 1 2 3 4 5 6
    // The new array is:
    // 2 3 8 15 24 30

    int a[] = {1, 2, 3, 4, 5, 6};
    int i, b[20];
    printf("\nThe given array is:");
    for( i = 0; i < 6; i++ )
        printf(" %d ",a[i]);

    printf("\nThe new array is:");
    for( i = 0; i < 6; i++ ){
        if( i == 0 )
            b[i] = a[i] * a[i+1];
        else if( i == 5)
            b[i] = a[i] * a[i-1];
        else if( i >= 1 && i <= 4 )
            b[i] = a[i-1] * a[i+1];
    }
    for( i = 0; i < 6; i++ )
        printf(" %d ",b[i]);
    printf("\n");
    return 0;
}
