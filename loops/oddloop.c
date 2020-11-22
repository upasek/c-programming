#include <stdio.h>
void main () {
    int num,y,n ;
    int another ;
    do{
        printf ("\nEnter the number : ");
        scanf ("%d",&num);
        printf ("\nThe square of %d is %d\n",num ,num*num);
        printf ("\nwant to enter another value yes = 1 ,no = 0 : ");
        scanf ("%d",&another);
    }
    while ( another == 1 );
}
