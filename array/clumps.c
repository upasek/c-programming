//Write a program in C to return the number of clumps(a series of 2 or more adjacent elements of the same value) in a given array. 
#include<stdio.h>
int main(){ 
     int a[] ={17, 42, 42, 42, 7, 24, 24, 24, 17}; 
     int i, count = 0, current = -1;
     
     printf("The given array is:");
     for( i = 0; i < 9; i++ )
         printf(" %d ",a[i]);
     
     printf("\nThe number of clumps in the array is:"); 
     for( i = 0; i < 9; i++ ){
         if( a[i] == a[i+1] && a[i] != current){
             current = a[i];
             count++;
         }  
         else if( a[i] != current)
             current = -1;
     }
     printf(" %d \n",count);
     return 0;
}
