#include<stdio.h>
int main(){
     //Write a program in C to find the index of first peak element in a given array. 
     int a[] = { 5, 12, 13, 20, 16, 19, 11, 7, 25};      
     int i;
     printf("\nThe given array is:");
     for( i = 0; i < 9; i++ )
         printf(" %d ",a[i]);
    
     for( i = 0; i < 9; i++ ){
         if( a[i] > a[i+1] ){
            printf("\nThe index of first peak element in the array is: %d\n",i);
            break;
         }
     }

     return 0;
}
