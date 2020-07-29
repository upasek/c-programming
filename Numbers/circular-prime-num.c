/* Write a program in C to check if a given number is circular prime or not*/
#include<stdio.h>
int prime (int x);
int main(){
    int num;
    printf("Input a Number: ");
    scanf("%d",&num);
    // -----finding the length of num-----
    int z = num;
    int q = 0;
    int m = 1;
    while( z > 0){
        z = z / 10;
        q++;
        m = m * 10;
    }
    // -----finding the num is circular prime or not-----
    int y = num;
    int length = q;
    int count = 0;
    int kir, j, k;
    while(q > 0){
        kir =  prime(num);
        
        if( kir == 0 )
            count++;

        j = num % 10;
        k = num / 10;
        num = ( j * (m / 10) ) + k;
        q--;
    }
    //-----comparison-----
    if( count == length && y != 1 )
        printf("The given number is a circular prime Number.\n");
    else
        printf("The given number is not a circular prime Number.\n");
    return 0;
}
//-----function for finding prime number-----
int prime (int x){
    int count = 0;
    int i;
    for( i = 2; i < x; i++ ){
        if( x % i == 0)
            count++;
    }
    return count;
}
