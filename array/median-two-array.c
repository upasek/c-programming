#include<stdio.h>
void main(){
    //Write a program in C to find the median of two sorted arrays of same size.
    int a[] = { 90, 240, 300};
    int b[] = { 10, 13, 14, 20, 25 };
    int i, j, temp, median;
    printf("\nThe given array - 1 is : ");
    for( i = 0; i < 3; i++ )
        printf(" %d ",a[i]);

    printf("\nThe given array - 2 is : ");
    for( i = 0; i < 5; i++ )
        printf(" %d ",b[i]);

    for( i = 0; i < 5; i++ )
        a[i+3] = b[i];

    for( i = 0; i < 8; i++ ){
        int min = i;
        for( j = i+1; j < 8; j++ ){
            if( a[min] > a[j])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    median = (0 + 7)/2;
    float  num = (a[median]+a[median+1])/2.0;   
    // for( i = 0; i < 8; i++ )
    //  printf(" %d ",a[i]);
    printf("\nThe Median of the 2 sorted arrays is: %f\n\n",num);
}
