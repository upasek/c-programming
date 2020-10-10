#include<stdio.h>
void main(){
    //Write a program in C to find maximum product subarray in a given array.
    int a[] = {-4, 9, -7, 0, -15, 6, 2, -3};  
    int i, j, pro = 1, max = 0;
    printf("\nThe given array is : ");
    for( i = 0; i < 8; i++ )
        printf(" %d ",a[i]);

    for( i = 0; i < 8; i++ ){
        pro = pro * a[i];
        if( pro == 0 )
            pro = 1;

        if( pro > max || pro < max )
            max = pro;
    }
    printf("\nThe maximum product of a sub-array in the given array is: %d\n",max);
}
