#include<stdio.h>
void main (){
      int i, j, k, n;
      printf ("Enter the number of rows:");
      scanf ("%d",&n);
         
      for ( i = 1; i <= n; i++ ){
             
          for ( j = 1; j <= i; j++ ){
             if ( i == 1 || i == n || i == j || j == 1){
                  printf (" *");
             }      
             else{
                printf ("  ");
             }
           }
          printf ("\n");
      }
}
