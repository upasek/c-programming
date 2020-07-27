/*Write a program in C to find the Floor and Ceiling of the number 0 to 10 from a sroted array.*/
#include<stdio.h>
int main(){
    int a[6] = {1, 3, 5, 7, 8, 9};
    int i, j, b;
    int size = sizeof(a)/sizeof(a[0]);
    printf("\nThe given array is :");
    for( i = 0; i < 6; i++ )
        printf(" %d ",a[i]);
    printf("\n");
    for( b = 0; b < 11; b++ ){
        for( i = 0; i < 6; i++ ){
            if( b == 0 && b <= a[i] ){
                printf("\nNumber: %d ceiling is: %d floor is: -1",b,a[i]);
                break;
            }
            if( b == a[i]){
                printf("\nNumber: %d ceiling is: %d floor is: %d",b,a[i],a[i]);
                break;
            }
            if( b > a[i] && b < a[i+1] ){
                printf("\nNumber: %d ceiling is: %d floor is: %d",b,a[i+1],a[i]);
                break;
            }
            if( b == 10 && b > a[i] ){
                printf("\nNumber: %d ceiling is: -1 floor is: %d\n\n",b,a[size-1]);
                break;
            }
        }
    }
    return 0;
}
