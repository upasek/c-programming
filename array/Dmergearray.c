/*program for merge two array in decrement order*/
#include <stdio.h>
int main (){
    int a[10], b[10], i, j, n, m, p;
    /*all about 1st array*/
    printf ("Enter the size of 1st array : ");
    scanf ("%d",&n);
    
    printf ("Enter the element : ");
    for ( i = 0; i < n; i++ )
        scanf ("%d",&a[i]);

    /*all about 2nd array*/
    printf ("\nEnter the size of 2nd array : ");
    scanf ("%d",&m);

    printf ("Enter the element : ");
    for ( j = 0; j < m; j++ )
        scanf ("%d",&b[j]);

    for ( i = 0; i < m; i++ )
        a[n+i] = b[i];
     
    printf("\nNew array :");
    for ( i = 0; i < n+m; i++ ){
        int   max = i;
        for ( j = i + 1; j < n+m; j++ ){
            if ( a[max] < a[j] ){
                max = j;
            }
        }
        p = a[i];
        a[i] = a[max];
        a[max] = p;
        printf (" %d ",a[i]);
    }
    printf ("\n");
    return 0;
}
