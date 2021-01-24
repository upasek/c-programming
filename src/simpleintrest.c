#include <stdio.h>
void main(){

    /* calculation of simple intrest */

    int p,n ;
    float r, si;

    printf ("enter the value of p,n,r");
    scanf ("%d%d%f",&p,&n,&r);


    /* formula of simple intrest is p*n*r / 100 */


    si = p * n * r / 100 ;
    printf ("%f",si);

}
