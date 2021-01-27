#include<stdio.h>
void main(){
    // sort 2D array 
    int a[4][4], i, j, k = 0, b[16], temp;
    // take input from user
    printf ("Enter the elemnet in array :\n");
    for ( i = 0; i < 4; i++ ){
        for ( j = 0; j < 4; j++ )
            scanf("%d",&a[i][j]);
    }
    // convert 2D array in 1D array
    for ( i = 0; i < 4; i++ ){
        for ( j = 0; j < 4; j++ )
            b[k++] = a[i][j];
    }
    // printf output without sorting
    printf ("\noutput before sorting in 1D array :\n");
    for ( i = 0; i < 16; i++){
        printf ("%d\t",b[i]);
    }
    printf ("\n\n");
    // sort element in 1D array
    for ( i = 0; i < 16; i++ ){
        int min = i;
        for ( j = i+1; j < 16; j++ ){
            if ( b[min] > b[j])
                min = j;
        }
        temp = b[i];
        b[i] = b[min];
        b[min] = temp;
    }
    printf("\n output after sorting in 1D array :\n");
    for ( i = 0; i < 16; i++){
        printf ("%d\t",b[i]);
    }
    printf ("\n\n");
    int n=0;
    // convert 1D array in 2D array after sorting
    for ( i = 0; i < 4; i++ ){
        for ( j = 0; j < 4; j++ )
            a[i][j] = b[n++];
    }
    // show result in 2D array
    for( i = 0; i < 4; i++ ){
        for ( j = 0; j < 4; j++){
            printf ("%d\t",a[i][j]);
        }
        printf ("\n");
    }
}
