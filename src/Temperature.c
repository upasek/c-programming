#include <stdio.h>
void main () {
// convert temperature of fahrenheit into centigrade 
    int a;
    float centigrade ;
    printf ("enter the temperature in fahrenheit : ");
    scanf ("%d",&a);
    // 1 fahrenheit = -17.2222 centigrade 
    //       a      =     ?
    // formula = (a - 32) * 5/9;
    centigrade = (a - 32)  * 0.5555;
    printf ("\ncentigrade = %0.3f\n",centigrade);
}
