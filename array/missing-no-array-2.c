#include<stdio.h>
void main(){
    // Write a program in C to find the missing number from a given array. There are no duplicates in list.
    // summation methode
    // complexity o(n)
    // unsorted array 
    int a[8] = { 1, 3, 4, 2, 5, 6, 9, 8};
    int i, num = 0, sum = 0;
    printf("\nThe given array is :");
    int max = a[0];
    for( i = 0; i < 8; i++ ){
        printf("%d  ",a[i]);
        sum = sum + a[i];
        if( max < a[i])
            max = a[i];
    }
    // here we use max*(max+1)/2 this formula also for sum of n numbers
    for( i = 0; i <= max; i++ )
        num = num + i;
    printf("\n");
    printf("\nThe missing number is : %d\n",num-sum);
}
