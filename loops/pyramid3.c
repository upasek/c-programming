#include<stdio.h>
void main (){
    int i, j, k, n, m, l = 0;
    printf ("Enter the number of rows :");
    scanf ("%d",&n);

    for ( i = 1; i <= n; i++ ){ 
        for( j = n; j > i; j-- ){
            printf (" ");
        }
        for ( k = 1; k <= i + l; k++ ){
            printf ("*");
        }
        l++;
        printf ("\n");
    }

    m = 2*n - 3; 
    for ( i = 1; i <= n; i++ ){

        for ( j = 1; j <= i; j++ ){
            printf (" ");
        }
        for ( k = m; k >= i; k-- ){
            printf ("*");
        }
        m--;
        printf ("\n");
    }
}
