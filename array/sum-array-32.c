#include<stdio.h>
// Write a program in C to find a pair with given sum in the array. Go to the editor
//Expected Output :
//The given array : 6 8 4 -5 7 9
//The given sum : 15
//Pair of elements can make the given sum by the value of index 0 and 5
void main(){
    int a[6] = { 6, 8, 4, -5, 7, 9};
    int i, j, b;
    printf("\nThe given array is..\n");
    for( i = 0; i < 6; i++ )
        printf("%d ",a[i]);
    printf("\nThe given sum is : 15\n");
    for( i = 0; i < 6; i++ ){
        for( j = i+1; j < 6; j++ ){
            if( a[i] + a[j] == 15){
                printf("\nPair of element can make the given sum by the value of index %d and %d\n",i,j);
                b = j;
                break ;
            }
        }
        if(a[i]+a[b]==15)
            break;
    }

}
