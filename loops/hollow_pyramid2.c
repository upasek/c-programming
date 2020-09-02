#include<stdio.h>
void main (){
    int i, j, k, m, n;
    printf ("Enter the number of rows :");
    scanf ("%d",&n); 
    m = 2 * n - 1;

    for ( i = 1; i <= n; i++ ){
        for  ( j = 1; j < i; j++ ){
            printf ("  ");
        } 
        int a = 1;
        for ( k = i; k <= m; k++ ){
            if ( i == 1 || i == n || k == i || k == m ){ 
                printf (" *");
            }
            else{
                printf ("  ");
            }
            a++;
        }
        m--;
        printf ("\n");
    }
}
