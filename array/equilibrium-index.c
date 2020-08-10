/*Write a program in C find the equilibrium index of an array.*/
#include<stdio.h>
int main(){
     int a[] = {0, -4, 7, -4, -2, 6, -3, 0};
     int i, j, diff1, diff2, z = 7, x = 0, add = 0, sum[20];
     printf("The given array is: ");
     for( i = 0; i < 8; i++ )
         printf(" %d ",a[i]);
     
     for( i = 0; i < 8; i++ ){
         add = add + a[i];
         sum[i] =  add ;
        // printf(" %d ",sum[i]);
     }
     printf("\nThe equilibrium index found at : ");
     for( i = 1; i < 7; i++ ){
         diff1 = sum[i] - a[i];
         diff2 = sum[7] - sum[i];
         if( diff1 == diff2 ){
            printf("%d %d %d",z,i,x);      
            break;
         }
     }
     printf("\n");
     return 0;
} 
