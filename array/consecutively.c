/*Write a program in C that checks whether the elements in an unsorted array appears consecutively or not*/
#include<stdio.h>
void main(){
    int a[] = {7, 4, 8, 5, 6, 3};  
    int i, j, k, b = 5, count = 0;
    printf("The given array is:");
    for( i = 0; i < 6; i++ )
        printf(" %d ",a[i]);

    int max = a[0];
    for( i = 0; i < 6; i++ ){
        if( max < a[i]){
            max = a[i];
            k = i;
        }
    }

    for( i = 0; i < 6; i++ ){
        if( i != k ){
            int num = a[i]+1;
            for( j = 0; j < 6; j++ ){
                if( num == a[j])
                    count++;   
            }
        }
    }
    if( count == b )
        printf("\nThe appearence of elements in the array are consecutive.\n");
    else 
        printf("\nThe appearence of elements in the array are not consecutive.\n");
}
