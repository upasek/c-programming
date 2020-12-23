#include <stdio.h>
void main (){
    int i, j, k, n, l;
    printf ("Enter the number of rows :");
    scanf ("%d",&n);
    l = 2*n - 1; 
    for ( i = 1; i <= n; i++ ){

        for ( j = 1; j < i; j++ ){
            printf (" ");
        }
        for ( k = l; k >= i; k-- ){
            printf ("*");
        }
        l--;
        printf ("\n");
    }

}
