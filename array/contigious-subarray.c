/*Write a program in C to find the maximum for each and every contigious subarray of size k from a given array.*/
#include<stdio.h>
int main(){
    int a[] = {1, 3, 6, 21, 4, 9, 12, 3, 16, 10}; 
    int i, j;
   
    printf("\nThe given array is : ");
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);
  
    printf("\nThe length of each subarray is: 4");
    for( i = 0; i < 7; i++ ){
        int max = a[i];
        for( j = i; j < i+4; j++ ){
            if( max < a[j]){
                max = a[j];
            }
        }
        printf("\n %d %d %d %d ----> %d ",a[i],a[i+1],a[i+2],a[i+3],max);
    }
    printf("\n");
    return 0;
}
