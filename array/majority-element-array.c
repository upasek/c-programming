#include<stdio.h>
//Write a program in C to find the majority element of an array.
// complexity o(n*n)
void main(){
    int a[8] = { 1, 4, 4, 6, 7, 4, 4, 8};
    int b[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
    int i, j, c = 0;
    printf("\nThe given array is :");
    for( i = 0; i < 8; i++ )
        printf("%d  ",a[i]);
    printf("\n");
    for( i = 0; i < 8; i++ ){
        int count = 1;
        for( j = i+1; j < 8; j++ ){
            if( a[i] == a[j]){
                count++;
                b[j] = 0;
            }
        }
        if ( count > 8/2 && b[i] != 0 ){
            printf("\nThe Majority Elements in the given array : %d\n",a[i]);
            c++;
            break;
        }
    }
    if(c == 0)
        printf("\nThere are no Majority Elements in the given array.\n");
}
