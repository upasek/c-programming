#include <stdio.h>
void main () {
    /*  find out the gross salary */

    int BS , HRA , DA , GS ;

    printf ("enter the basic salary :");
    scanf ("%d",&BS );

    if ( BS < 1500 ){
        HRA = 10 * BS / 100 ;
        DA = 90 * BS / 100 ;
    }

    else {
        HRA = 500 ;
        DA = 98 * BS /100 ;
    }

    GS = HRA + DA + BS ;
    printf ("GS = %d\n",GS);

}
