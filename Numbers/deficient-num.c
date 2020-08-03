/*program for deficient number*/
#include<stdio.h>
void main(){
     int num, sum = 0, i;
     printf("Input an integer number: ");
     scanf("%d",&num);

     for( i = 1; i < num; i++ ){
         if( num % i == 0)
            sum = sum + i;
     }
     if( sum < num)
         printf("\nThe number is Deficient.\n");
     else
         printf("\nThe number is not Deficient.\n");
}
