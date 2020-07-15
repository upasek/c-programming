/*The program for merging and sorting two array*/
#include <stdio.h>
int main (){
    int a[10], b[10], i, j, n, m, p;
    //all about 1st array
    printf ("\nEnter the size of 1st array :");
    scanf ("%d",&n);
    printf ("Enter the elements :");
    for ( i = 0; i < n; i++ )
        scanf ("%d",&a[i]);

    //all about 2nd array
    printf ("\nEnter the size of 2nd array :");
    scanf ("%d",&m);
    printf ("Enter the elements :");
    for ( j = 0; j < m; j++ )
        scanf ("%d",&b[j]);

    for ( i = 0; i < m; i++ ){
        a[n+i] = b[i];
    }
    
    printf("\n\nArray after merging and sorting :");
    for ( i = 0; i < n+m; i++ ){
        int   min = i;
        for ( j = i + 1; j < n+m; j++ ){
            if ( a[min] > a[j] ){
                min = j;
            }
        }
        p = a[i];
        a[i] = a[min];
        a[min] = p;
        printf ("%d ",a[i]);
    }
    printf ("\n\n");
    return 0;
}
