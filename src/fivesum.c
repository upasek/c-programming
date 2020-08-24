#include <stdio.h>
int main () {

    int a , sum ,b,c,d,e,f,g,h,i,j ;
    
    printf ("Enter the five digit number : ");
    scanf ("%d",&a);

    b = a % 11 ;
    c = a % 3 ;
    d = a % 4 ;
    e = a % 5 ;
    f = a % 6 ;
    g = a % 7 ;
    h = a % 8 ;
    i = a % 9 ;
    j = a % 10 ;

    sum = b + c + d + e + f + h + i + j ;

    printf ("sum = %d\n",sum );

    return 0;
}
