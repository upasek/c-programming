#include <stdio.h>
void main () {
    int num ;
    int another = 1;
    while(another == 1){
        printf ("\nEnter the number :");
        scanf ("%d",&num);
        printf ("\nThe square of %d is %d\n",num ,num *num);
        printf ("\nwant to enter number yes = 1 /no = 0 : ");
        scanf ("%d",&another);
    }
}
