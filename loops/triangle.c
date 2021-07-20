#include<stdio.h>
void main(){
    int i,k,j,n;
    printf ("Enter the value of n :");
    scanf ("%d",&n);
    for (i=n;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf ("*"); 
        }
        printf ("\n");
    }

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf ("*");
        }
        printf ("\n");
    }
} 
