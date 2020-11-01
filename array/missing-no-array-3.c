#include<stdio.h>
void main(){
    // Write a program in C to find the missing number from a given array. There are no duplicates in list.
    // by using xor gate truth table 
    // complexity o(n)
    // unsorted array 
    int a[8] = {1, 3, 4, 2, 5, 6, 9, 8};
    int i, j, sum = 0, num;
    printf("\nThe given array is :");
    int max = a[0];
    for( i = 0; i < 8; i++ ){
        printf("%d  ",a[i]);
        sum = sum ^ a[i];
        if ( max < a[i])
            max = a[i];
    }
    for( i = 0; i <= max; i++ )
        num = num ^ i;
    j = num ^ sum;
    printf("\n\nThe missing number is : %d\n",j);       
}
