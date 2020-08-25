//Write a program in C to find the number of times (frequency) occurs a given number in an array.
//// complexity o(n)
#include<stdio.h>
void main(){ 
    int a[] = {2, 3, 4, 4, 4, 4, 5, 5, 5, 6, 7, 7};
    int num = 4, count = 0, i;
    printf("\nThe given array is : ");
    for( i = 0; i < 12; i++ )
        printf(" %d ",a[i]);
    for( i = 0;i < 12; i++ ){
        if( num == a[i]){
             count++;
        }
    }
    printf("\nThe number of times the number %d occurs in the given array is: %d\n",num,count);
}
