/*program for deleting element in array*/
#include<stdio.h>
int main(){
    int a[10], n, i, loc, p; 
    printf ("Enter the size of array: ");
    scanf ("%d",&n);

    printf ("\nEnter the element : ");
    for ( i = 0; i < n; i++ )
        scanf ("%d",&a[i]);

    printf ("\nEnter the location : ");
    scanf ("%d",&loc);
    p = a[loc];
    for ( i = loc + 1; i < n; i++ )
        a[i - 1] = a[i];
    
    printf("\nNew array after removing element : ");
    for ( i = 0; i < n; i++)
        printf (" %d ",a[i]);
    
    printf("\n");
    return 0;
}   
