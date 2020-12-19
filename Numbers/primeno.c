#include <stdio.h>
void main (){
    int num ,i, c = 0   ;
    printf ("Enter the number:");
    scanf ("%d",&num);
    for (i=2;i<=num-1;i++)
    {
        if (num % i == 0 ){
            c++;
            printf ("\nNot a prime number\n");
            break ;
        }
    }
    if ( c == 0)
        printf ("\nIs a prime number\n");
}
