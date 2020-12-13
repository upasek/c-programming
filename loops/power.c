#include <stdio.h>
void main() {

    int x,y,i=1;

    int  power = 1;



    printf ("\nEnter the two value :");
    scanf ("%d%d",&x,&y);

    while ( i <= y)
    {
        power = power * x ;
        i++;
    }
    printf ("\n%d to The power%d is:%d",x,y,power);

}
