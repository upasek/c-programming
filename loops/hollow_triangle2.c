#include<stdio.h>
void main (){
    int i, j, n;
    printf ("Enter the number of rows:");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++ ){
        for ( j = n; j >= i; j-- ){
            if ( i == 1 || j == 1 || j == n || j == i  ){
                printf (" *");
            }
            else {
                printf ("  ");
            }

        }
        printf ("\n");
    } 

}
