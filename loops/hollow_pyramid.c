#include<stdio.h>
void main (){
    int i, j, k, n, l = 0;
    printf ("Enter the number of rows :");
    scanf ("%d",&n);

    for( i = 1; i <= n; i++ ){

        for ( j = n; j > i; j--){
            printf ("  ");          
        }   
        for ( k = 1; k <= i + l; k++ ){
            if ( i == 1 || k == 1  || i == n || k == i + l){

                printf (" *");   
            }  
            else{
                printf ("  ");
            }
        }
        l++;
        printf ("\n");
    }
}
