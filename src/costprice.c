#include <stdio.h>
int main () {
    // calculation of cost price of one item 
    // cost price = selling price - profit 
    // cost price = c , selling price =s , profit =p 

    float s , p ,c ;
    printf ("Enter the selling price and profit of 15 items =");
    scanf ("%f %f",&s,&p);
    // cost price of one item = (selling price - profit ) / 15 
    c = (s - p ) / 15 ;
    printf ("\nCost price of one item = %.3f \n", c );
    return 0;
}
