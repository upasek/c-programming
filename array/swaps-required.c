#include<stdio.h>
int main(){
    //Write a program in C to find minimum number of swaps required to gather all elements less than or equals to k. 
    int a[] = {2, 7, 9, 5, 8, 7, 4};
    int i, count = 0;
    printf("\nThe given array is:");
    for( i = 0; i < 7; i++ )
        printf(" %d ",a[i]);

    for( i = 0; i < 7; i++ ){
        if( a[i] > 7 )
            count++;
    }
    printf("\nThe minimum swap required is: %d\n",count);
    return 0;
}
