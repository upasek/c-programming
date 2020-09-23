#include <stdio.h>
void main () {
    /* calculation of area of rectangle and circle */
    /* calculation of perimeter of rectangle and cicumference of circle */
    float l , b , r ;
    float a = 3.14 ;
    float w , x , y , z ;   
    printf ("enter the value of length , breath and radius");
    scanf ("%f%f%F",&l,&b,&r);
    /* area of rectangle = w , perimeter = x , area of circle = y , circumference = z */
    w = l * b ;
    printf ("\n%f",w );
    x = 2*l + 2*b ;
    printf ("\n%f",x );
    y = a * r *r ;
    printf ("\n%f",y );
    z = 2 * a * r ;
    printf ("\n%f",z );
}
