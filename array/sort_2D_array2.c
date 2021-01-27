#include <stdio.h>
void main(){
    // sort 2D array
    int a[3][3], i, j, k, l, temp, c, b;
    printf("\nEnter the element in 2D array :\n");
    for( i = 0; i < 3; i++ ){
        for( j = 0; j < 3; j++ )
            scanf("%d",&a[i][j]);
    }
    // sort array
    for( i = 0; i < 3; i++ ){
        for( j = 0; j < 3; j++ ){
            int min = a[i][j];
            l = j + 1;
            for( k = i; k < 3; k++ ){
                while( l < 3 ){
                    if( min > a[k][l]){
                        min = a[k][l];
                        a[k][l] = a[i][j];
                        a[i][j] = min;
                    }
                    l++;
                }
                l = 0;
            }
        }
    }
    // show result 
    for ( i = 0; i < 3; i++ ){
          for( j = 0; j < 3; j++)
             printf ("%d\t",a[i][j]);
    
           printf("\n");
    }


}
