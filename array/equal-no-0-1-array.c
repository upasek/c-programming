/*Write a program in C to find the largest subarray with equal number of 0s and 1s.*/
#include<stdio.h>
int main(){
    //complexity o(n)
    int a[] = {0, 1, 0, 0, 1, 1, 0, 1, 1, 1};
    int i, j = 0, k;

    printf("The given array is :");
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);
    
    for( i = 0; i < 10; i++ ){
        if( a[i] == 0 )
            j++;
        if ( a[i] == 1 )
            j--;
        if ( j == 0 )
            k = i;
    }
    printf("\nSubarray found from the index 0 to %d \n",k);
    return 0;
}
