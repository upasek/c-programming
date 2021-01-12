#include<stdio.h>
#include<math.h>
// code for finding roots  of qudratic equation 
void main(){
    double  a, b, c, q, x, y;
    printf ("Enter the value of a, b, c :");
    scanf ("%lf%lf%lf",&a,&b,&c);
    q = (b*b) - (4*a*c);
    if ( q >= 0 ){
        x = (- b + sqrt(q)) / (2 * a);
        y = (- b - sqrt(q)) / (2 * a); 
        printf ("The roots of equation are %4lf anf %4lf ",x,y);
    }
    else
        printf ("The roots are imeainary .");
}
