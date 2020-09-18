#include<stdio.h>
void main(){
    // finding large element in 2D array
    int i, j, a[5][5], max;
    printf ("Enter the element in array:\n");
    for ( i = 0; i < 5; i++ ){
        for ( j = 0; j < 5; j++)
            scanf("%d",&a[i][j]);
    }
    max = a[0][0];
    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 5; j++){
            if ( max < a[i][j])
                max = a[i][j];
        }
    }
    printf ("\n large no in 2D array = %d\n",max);
}
