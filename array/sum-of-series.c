/* Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function. */
#include<stdio.h>
int fact();
int main(){
    int sum = 0;
    int temp, i;
    for( i = 1; i <= 5; i++ ){
        temp = fact(i);
        sum  = sum + ( temp / i );
    }
    printf("\nThe sum of the series is : %d\n ",sum);
    return 0;
}
int fact(int x){
    int i, mul = 1;
    for(i = x; i >= 1; i-- ){
        mul = mul * i;
    }
    return mul;
}
