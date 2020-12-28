#include<stdio.h>
void main(){
    //Write a program in C to convert the array in such a way that double its value and replace the next number with 0 if current and next element are same and rearrange the array such that all 0's shifted to the end.
    //The given array is: 0 3 3 3 0 0 7 7 0 9
    //The new array is: 6 3 14 9 0 0 0 0 0 0
    int a[] = {0, 3, 3, 3, 0, 0, 7, 7, 0, 9};
    int i, j, b = 0;
    printf("\nThe given array is:");
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);

    //printf("\nThe new array is:");
    for( i = 0; i < 10; i++ ){
        if( a[i] == a[i+1] && a[i] != 0){
            a[i] = a[i] + a[i+1];
            a[i+1] = 0;
        }
    }
 //   for( i = 0; i < 10; i++ )
   //     printf(" %d ",a[i]);
    printf("\nThe New array is : ");
    for( i = 0; i < 10; i++ ){
        if( a[b] == 0 ){
            int temp = a[b];
            for( j = b; j < 10; j++ ){
                a[j] = a[j+1];
            }
            a[9] = temp;
        }
        else if ( a[b] != 0){
            b++;
        }
    }
    for( i = 0; i < 10; i++ )
        printf(" %d ",a[i]);
    printf("\n");
}
