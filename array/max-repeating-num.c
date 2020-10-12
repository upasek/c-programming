#include<stdio.h>
void main(){
    //Write a program in C to find the maximum repeating number in a given array. 
    //The array range is [0..n-1] and the elements are in the range [0..k-1] and k<=n..
    //Expected Output:
    //The given array is:
    //2 3 3 5 3 4 1 7 7 7 7
    //The maximum repeating number is: 7
    int a[] = {2, 3, 3, 5, 3, 4, 1, 7, 7, 7, 7};
    int i, j, max = 0, b;
    printf("\nThe given array is:");
    for( i = 0; i < 11; i++ )
        printf(" %d ",a[i]);

    for( i = 0; i < 11; i++ ){
        int count = 1;
        for( j = i+1; j < 11; j++ ){
            if( a[i] == a[j] )
                count++;
        }
        if( max <= count ){
            max = count;
            b = a[i];
        }
    }
    printf("\nThe maximum repeating number is: %d\n",b);
}
