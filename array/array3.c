/*The program for inserting one array in another array*/
#include <stdio.h>
int main () {
    int a[100],b[100],i,loc,n,m;
    // all data of first array 
    printf ("\nEnter the size of 1st array : ");
    scanf ("%d",&n);
    
    printf ("\nEnter the element in 1st array : ");
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);

    // all data for 2nd array 
    printf ("\nEnter the size of 2nd array : ");
    scanf ("%d",&m);

    printf ("\nEnter the element of 2nd array : ");
    for (i=0;i<m;i++)
        scanf ("%d",&b[i]);

    // information about location 
    printf ("\nEnter the location : ");
    scanf ("%d",&loc);

    for (i=n-1;i>=loc;i--)
        a[i+m]=a[i];
    
    for (i=0;i<m;i++)
        a[loc+i]=b[i];

    // print the result 
    printf("\nAfter inserting one array in another array : ");
    for (i=0;i<n+m;i++)
        printf ("%d ",a[i]);

    printf ("\n");
    return 0;
}
