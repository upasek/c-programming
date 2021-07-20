#include <stdio.h>
void main(){
    int i,j,k,n;
    printf ("Enter the value of n :");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (k=1;k<i;k++)
        {
            printf  (" ");
        }
        for (j=n;j>=i;j--)
        {
            printf ("*");
        }
        printf ("\n");
    }
}
