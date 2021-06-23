#include<stdio.h>
void main(){
     // Write a program in C to find two elements whose sum is closest to zero.
     int a[10] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
     int i, j, sum , b;
     printf("\nThe given array is :");
     for( i = 0; i < 10; i++ )
         printf(" %d ",a[i]);
     int c = a[0], d = a[1];
     int  max = c + d;
     for( i = 0; i < 10; i++ ){
         for( j = i + 1; j < 10; j++ ){
             sum  = a[i] + a[j];
             if ( max > sum || max < sum )
                    max = sum;
                    c = a[i];
                    d = a[j];
         }
     }
     printf("\nThe Pair of elements whose sum is minimum are: %d and %d \n",c,d );

}
