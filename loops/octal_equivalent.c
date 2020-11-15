#include<stdio.h>
void main(){
    int num, q, n, p, sum = 0; 
    printf ("Enter the number :");
    scanf ("%d",&n);

    while ( n > 0 ){
        p = n % 8;
        sum = ( sum * 10 ) +  p;
        n = n / 8;
    }
    num = sum;
    int cum = 0;
    while ( num > 0 ){
        q = num % 10;
        cum = ( cum * 10 ) + q;
        num = num / 10;
    }
    printf ("Octal equivalent : %d\n",cum);
}
