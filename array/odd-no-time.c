#include<stdio.h>
//program in C to find the number occurring odd number of times in an array.
// complexity o(n*n)
void main(){
    int a[9] = { 3, 3, 8, 5, 4, 3, 4, 3, 3};
    int b[9] = {-1, -1, -1, -1, -1, -1, -1, -1, -1};
    int i, j;
    printf("\nThe given array is :");
    for( i = 0; i < 9; i++ )
        printf("%d  ",a[i]);
    for( i = 0; i < 9; i++ ){
        int count = 1;
        for( j = i+1; j < 9; j++ ){
            if( a[i] == a[j]){
                count++;
                b[j] = 0;             
            }     
        }
        if ( count % 2 !=  0 &&  b[i] != 0 ){
            printf("\nThe element odd number of times is : %d \n",a[i]);
        }
    }
}
