#include<stdio.h>
#include<math.h>
void main(){
    int i, p , q = 1, r = 1;
    printf("The first 15 narcissistic decimal numbers are:\n");
    printf("------------------------------------------------\n");
    while ( q <= 15 ){
        int sum = 0;
        int num = r;
        int a = r;
        int n = 0;
        while( a > 0){
            a = a / 10;
            n++;
        }
        while ( num  > 0 ){
            p = num % 10;
            sum = sum + pow(p, n);
            num = num / 10;               
        }
        if ( r == sum ){
            printf ("%d ",r);
            q++;
        }
        r++;
    }
    printf("\n");
}
