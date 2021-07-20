#include<stdio.h>
void main(){
     int i, j, k, n;
     printf("Enter the number of rows : ");
     scanf("%d",&n);
     int a = 1;
   //  int spa = n -1;
     for( i = 1; i <=n; i++ ){
         for( k = n-1 ; k >=i; k-- ){ 
             printf(" ");
         }
         for( j = 1; j <= i; j++ ){
             printf("* ");
             a++;
          }
         printf("\n");
     }
}
