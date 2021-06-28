#include <stdio.h>
void main () {
    // convert temperature of Centigrade to Fahrenheit. 
    int a;
    float Fahrenheit ;
    printf ("enter the temperature in Centigrade : ");
    scanf ("%d",&a);
    // 1 Centigrade = 33.8 Fahrenheit
    //       a      =     ?
    // formula = (1 c + 9/5) + 32;     
    Fahrenheit  = (a * 1.8) + 32;
    printf ("\nFahrenheit = %0.3f\n",Fahrenheit);
}

