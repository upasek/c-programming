#include<stdio.h>
void main(){
    //Write a program in C to find the product of an array such that product is equal to the product of all the elements of arr[] except arr[i].
    //Expected Output :
    //The given array is : 1 2 3 4 5 6
    //The product array is: 720 360 240 180 144 120
    int a[] = {1, 2, 3, 4, 5, 6};
    int i, j;
    printf("\nThe given array is : ");
    for( i = 0; i < 6; i++ )
        printf(" %d ",a[i]);
    printf("\nThe product array is:");
    for( i = 0; i < 6; i++ ){
        int pro = 1;
        for( j = 0; j < 6; j++ ){
            if( j != i ){
                pro = pro * a[j];
            }
        }
        printf(" %d ",pro);
    }
    printf("\n");
}
