/*triangle of asterisks*/
#include <stdio.h>
void main(){
    int i, m, j, k , n, l = -1 ;
    printf ("Enter the number of rows :");
    scanf ("%d",&n);
    for ( i = 1; i <= n; i++ ){
        for ( j = n; j >= i; j-- ){
            printf (" *");
        }

        for ( k = 2; k <= i + l; k++ ){
            printf ("  ");
        }

        for ( m = n ; m >= i; m-- ){
            if ( m <= n && m > 1){ 
                printf (" *");
            }
        }
        l++;
        printf ("\n");
    }
}
