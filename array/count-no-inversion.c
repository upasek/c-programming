// Write a program in C to count the number of inversion in a given array.
// Expected Output :
// The given array is : 1 9 6 4 5
// The inversions are: (9, 6) (9, 4) (9, 5) (6, 4) (6, 5)
// The number of inversion can be formed from the array is: 5
#include<stdio.h>
void main(){
     int a[] = {1, 9, 6, 4, 5};
     int i, j, count = 0;
     printf("\nThe given array is :");
     for( i = 0; i < 5; i++ )
         printf(" %d ",a[i]);
     
     printf("\nThe inversions are: ");
     for( i = 0; i < 5; i++ ){
         for( j = i+1; j < 5; j++ ){
             if( a[i] > a[j] ){
                printf("(%d, %d)",a[i],a[j]);
                count++;
             }
         }
     }
     printf("\nThe number of inversion can be formed from the array is: %d\n\n",count);
} 
