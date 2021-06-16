//48. Write a C program to find Strong Numbers within a range of numbers.
#include<stdio.h>
void main(){
    int num, p, i, a, b, d;
    printf("Input starting range of number : ");
    scanf("%d",&a);
    printf("Input ending range of number: ");
    scanf("%d",&b);
    printf("The Strong numbers are : ");
    for( i = a; i <= b; i++ ){
        int  sum = 0;
        d  = i;
        while( d > 0){
            p = d % 10;
            int f = 1;
            while( p > 0){
                f = f * p;
                p--;
            }
            sum = sum + f;
            d = d / 10;
        }
        if( sum == i)
            printf(" %d ",i);
    }
    printf("\n");
}

