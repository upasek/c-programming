#include<stdio.h>
void main(){
    //Write a program in C to rearrange an array such that arr[i]=i. 
    //The given array is:
    //2 5 -1 6 -1 8 7 -1 9 1
    //The new array is: -1 1 2 -1 -1 5 6 7 8 9
    int a[] = {2, 5, -1, 6, -1, 8, 7, -1, 9, 1};
    int i, j, b[20];
    printf("\nThe given array is:");
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);
    printf("\nThe new array is:");
    for( i = 0; i < 10; i++ ){
        int c = 0;
        for( j = 0; j < 10; j++ ){
            if( i == a[j]){
                b[i] = i;
                c++;
                break;
            }
        }
        if( c == 0)
            b[i] = -1;
    }
    for( i = 0; i < 10; i++ )
        printf(" %d ",b[i]);
    printf("\n");
}
