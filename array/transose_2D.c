#include<stdio.h>
void main(){
    int i, j, a[4][4], n = 1, temp;
    // transpose of 2D array matrix
    printf ("enter the element :\n");
    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++)
            scanf("%d",&a[i][j]);
    }
    for( i = 0; i < 4; i++ ){
        int b = 1;
        for ( j = n; j < 4; j++ ){
            temp = a[i][j];
            a[i][j] = a[i+b][j-b];
            a[i+b][j-b] = temp;
            b++;
        }
        n++;
    }
    printf("\n");
    for( i = 0; i < 4; i++ ){
        for ( j = 0; j < 4; j++)
            printf ("%d\t",a[i][j]);

        printf("\n");
    }
}
