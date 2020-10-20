/* Write a program in C to generate mersenne primes within a range of numbers*/
#include<stdio.h>
#include<math.h>
#include<stdio.h>
//-------function for finding the number is prin=me or not -------
int prime( int x ){
    int i;
    int q = 0;
    for( i = 2; i < x/2; i++ ){
        if( x % i == 0)
            q++;
    }
    return q;
}
//----main body of program ------------------
int main(){
    int i;
    printf("Mersenne prime numbers are:\n");
    printf("-------------------------------\n");
    for( i = 0; i <= 1000; i++ ){
        int a = 0;
        int kir = 0;
        while( kir != i ){
            kir = pow(2, a) - 1;
            int pri = prime(kir);
            if( kir == i  && pri == 0 && i != 1){
                printf("%d ",i);
                break;
            }
            else if( kir > i )
                break;
            a++;
        }
    }
    printf("\n");
    return 0;
} 
