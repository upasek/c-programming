//Harmonic series

#include<stdio.h>
int main(){
     int i, n;
     float sum = 0.0;
     printf("Input the number of terms : ");
     scanf("%d",&n);
     for( i = 1; i <= n; i++ ){
         sum =  sum + 1/(float)i ;
     }
     printf("\nSum of Series upto %d terms : %f\n",n,sum);

     return 0;
}
