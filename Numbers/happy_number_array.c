#include<stdio.h>
int main(){
    int a[10], num, b, n, p, sum = 0;
    printf ("Enter the number : ");
    scanf ("%d",&num);
    b = num;
    while ( sum != 1 && sum != 4 ){
        sum = 0;
        while( num > 0 ){
            p = num % 10;
            sum = sum + ( p * p );
            num = num / 10;
        }
        num = sum ;
    }
    if ( sum == 1 ){
        printf("%d are happy numbers.\n",b);
    }
    else{
        printf ("%d are unhappy numbers.\n",b);
    }

    return 0;
}
