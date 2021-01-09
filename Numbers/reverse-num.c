#include<stdio.h>
void main(){
    int num, p, i, rev = 0;
     printf("Input a number: ");
     scanf("%d",&num);
     while ( num > 0 ){
         p = num % 10;
         rev = rev * 10 + p;
         num = num / 10;
     }
     printf("\nThe number in reverse order is : %d\n",rev);
}
