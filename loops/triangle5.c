#include <stdio.h>
void main(){
    int n,i,j,k;
    printf ("Enter the number of rows:");
    scanf ("%d",&n);

    /* first loop */


    for (i=1;i<=n;i++)
    {
        for (k=1;k<i;k++)
        {
            printf (" ");
        }
        for (j=n;j>=i;j--)
        {
            printf("*"); 
        }
        printf ("\n");

    }


    /* second loop */

    for (i=n;i>=1;i--)
    {

        for (k=1;k<i;k++)
        {
            printf (" ");

        }

        for (j=n;j>=i;j--)

        {

            printf ("*");

        }
        printf ("\n");


    }

    printf ("\n");

}
