#include<stdio.h>
void main(){
    //Write a program in C to find the maximum element in an array which is first increasing and then decreasing. 
    int a[] = {2, 7 ,12, 25, 4, 57, 27, 44};
    int i, j;
    printf("\nThe given array is:");
    for( i = 0; i < 8; i++ )
        printf(" %d ",a[i]);

    int max = a[0];
    for( i = 0; i < 8; i++ ){
        if( max < a[i])
            max = a[i];
    }
    printf("\nThe maximum element which is increasing then decreasing is: %d\n",max);
}
