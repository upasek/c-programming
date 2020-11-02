#include<stdio.h>
void main(){
    //  Write a program in C to find the smallest missing element from a sorted array.
    //  sorted array 
    //  by using xor gate 
    int a[8] = { 1, 3, 4, 5, 6, 7, 8, 9};
    int i, b = 0, c, num = 0, sum = 0;
    printf("\nThe given array is :");
    for( i = 0; i < 8; i++ ){
        printf(" %d ",a[i]);
        sum = sum ^ a[i];
    }
    printf("%d",sum);
    for( i = a[0]; i <= a[7]; i++ )
        num = num ^ i;
    c = sum ^ num; 
    printf("\nThe missing smallest element is : %d \n",c);
}
