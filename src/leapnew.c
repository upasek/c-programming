#include<stdio.h>
void main (){
    /* leap year by logical operator */
    int a ;
    printf ("\nEnter the year:");
    scanf ("%d",&a);
    if ((a%4==0) && (a%100!=0) || (a%400==0))
        printf ("\n %d is a leap year\n",a);
    else 
        printf ("\n %d not a leap year\n",a);
}
