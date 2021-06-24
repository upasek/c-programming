/*Write a program in C to find any number between 1 and n that can be expressed as the sum of two cubes in two (or more) different ways.*/
#include<stdio.h>
int main(){
    int n = 100000;
    int i, j, k, l;
    int i3, j3, k3, l3;
    printf("The numbers in the above range are : \n");
    printf("-----------------------------------------\n");
    for( i = 1; i <= n; i++ ){
        i3 = i*i*i;
        if(i3 > n)break;

        for( j = i; j <= n; j++  ){
            j3 = j*j*j;
            if( i3 + j3 > n )break;

            for( k = i+1; k <= n; k++ ){
                k3 = k*k*k;
                if( k3 > i3 + j3 ) break;

                for( l = k; l <= n; l++ ){
                    l3 = l*l*l;
                    if( l3 + k3 > i3 + j3) break;
                    if( l3 + k3 == i3 + j3){
                        printf("%d = ",i3 + j3);
                        printf("%d^3 + %d^3 = ",i,j);
                        printf("%d^3 + %d^3 \n",k,l);
                    }
                }
            }
        }
    }
    return 0;
}
