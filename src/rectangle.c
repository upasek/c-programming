#include<stdio.h>
void main(){
    int a,b,c,d;
    printf ("Enter the length and breadth:");
    scanf ("%d%d",&a,&b);
    /* area of rectangle = c , perimeter = d */
    c=a*b; 
    d=2*(a+b);
    if (c>d)
        printf ("\nThe area of rectangle is %d and it is greather than it's perimeter %d\n",c,d);
}
