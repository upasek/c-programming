#include<stdio.h>
//program in C to find the number occurring odd number of times in an array.
//by using xor gate
// complexity o(n)
void main(){
    int a[9] = { 8, 3, 8, 5, 4, 3, 4, 3, 5};
    int i, j = 0;
    printf("\nThe given array is :");
    for( i = 0; i < 9; i++ )
        printf("%d  ",a[i]);
    for( i = 0; i < 9; i++ ){
        j = j ^ a[i];
    }
    printf("\nThe element odd number of times is : %d\n",j);
}
