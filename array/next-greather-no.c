#include<stdio.h>
void main(){
    //Write a program in C to to print next greater elements in a given unsorted array. Elements for which no greater element exist, consider next greater element as -1
    //
    //
    int a[6] = {5, 3, 10, 9, 6, 13};
    int i, j;
    printf("\nThe givem array is : ");
    for ( i = 0; i < 6; i++ )
        printf(" %d ",a[i]);
    printf("\nNext Bigger Elements are:");
    for( i = 0; i < 6; i++ ){
        for( j = i+1; j < 6; j++ ){
            if(a[j] > a[i]){
                printf("\nNext bigger element of %d in the array is: %d",a[i],a[j]);
                break;
            }
        }
        if(i == 5)
            printf("\nNext bigger element of %d in the array is: -1\n",a[i]);

    }
}
