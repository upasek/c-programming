#include<stdio.h>
void main(){
     //Write a program in C to find the smallest positive number missing from an unsorted array.
     //
      int a[9] = {3, 4, 10, -5, 15, 10, -10, -20};
      int i, num = a[0];
      printf("\nThe given array is: ");
      for( i = 0; i < 9; i++ )
          printf(" %d ",a[i]);
      for( i = 0; i < 9; i++ ){
          if ( a[i] > 0 && a[i] < num ){
              num = a[i];
          }
      }
      printf("\nThe smallest positive number missed is: %d\n",num);
}
