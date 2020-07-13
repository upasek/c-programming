/*finding absolute value of number*/
#include<stdio.h>
void main(){

    int a,b;

    printf ("Enter the value :");
    scanf ("%d",&a);

    b = -1 * a ;

    if (a<0)
        printf ("\nThe absolute value of %d is %d\n",a,b);

    else 
        printf ("\nThe absolute value of %d is %d\n",a,a);
}

