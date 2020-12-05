#include <stdio.h>
void main() {

    /* calculating percentage and aggregate */


    int a,b,c,d,e,aggregate;
    float percentage ;

    printf ("enter the mark obtained by student in five different subjects");
    scanf ("%d%d%d%d%d",&a,&b,&c,&d,&e);

    /* formula for aggregate = a+b+c+d+e */


    /* formula for percentage = aggregate *100 / 500 */

    aggregate = a+b+c+d+e ;

    printf ("\n%d",aggregate);


    percentage = aggregate * 100 / 500  ;



    printf ("\n%f",percentage);



}
