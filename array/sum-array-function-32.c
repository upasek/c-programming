#include<stdio.h>
// Write a program in C to find a pair with given sum in the array. Go to the editor
//Expected Output :
//The given array : 6 8 4 -5 7 9
//The given sum : 15
//Pair of elements can make the given sum by the value of index 0 and 5
void sum();
int main(){
    int a[] = { 6, 8, 4, -5, 7, 9};
    int i;
    printf("\nThe given array is :");
    for( i = 0; i < 6; i++ )
        printf("%d ",a[i]);
    printf("\n");
    int s = 15;
    int n = 6;
    printf("\nThe given sum is : %d\n",s);
    sum(a, n, s);
    return 0;
}
void sum( int a[], int n, int s){
    int i, j;
    for( i = 0; i < n; i++ ){
        for( j = i+1; j < n; j++ ){
            if( a[i]+a[j] == s){
                printf("\nPair of elements can make the given sum by the value of index %d and %d\n",i,j);
                return;   
            }
        }
    }
    printf("\nNo pair can make the given sum.\n");
}
