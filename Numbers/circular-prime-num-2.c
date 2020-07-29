/*Write a program in C to find circular prime numbers upto a specific limit*/
#include<stdio.h>
int prime (int x);
int main(){
    int i;
    printf("The Circular Prime Numbers less than 1000 are:\n");
    printf("---------------------------------------------------\n");
    for( i = 1; i <= 1000; i++ ){
        // -----for finding the length of num-----
        int z = i;
        int q = 0;
        int m = 1;
        while( z > 0){
            z = z / 10;
            q++;
            m = m * 10;
        }
        // -----for finding the num is circular prime or not-----
        int num = i;
        int length = q;
        int count = 0;
        int kir, j, k;
        while(q > 0){
            kir =  prime(num);
            if( kir == 0 )
                count++;
            
            j = num % 10;
            k = num / 10;
            num = ( j * ( m / 10) ) + k;
            q--;
        }
        //-----for comparison-----
        if( count == length && i != 1 )
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}

int prime (int x){
    int i;
    int count = 0;
    for( i = 2; i < x; i++ ){
        if( x % i == 0)
            count++;
    }
    return count;
}
