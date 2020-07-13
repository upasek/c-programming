/* Write a program in C to find maximum size square sub-matrix with all 1s. Go to the editor
Expected Output:*/
#include<stdio.h>
#include<math.h>
int min();
int main(){
    int a[4][5] = {
        1,0,1,1,1,
        0,0,1,1,1,
        1,0,1,1,1,
        0,1,0,1,0   
    };
    int i, j, b[4][5], max = 0;
    printf("\nThe given array is : \n");
    for( i = 0; i < 4; i++ ){
        for( j = 0; j < 5; j++ )
            printf(" %d ",a[i][j]);
        printf("\n");
    }
    for( i = 0; i < 4; i++ )
        b[i][0] = a[i][0];

    for( j = 0; j < 5; j++ )
        b[0][j] = a[0][j];

    for ( i = 1; i < 4; i++ ){
        for( j = 1; j < 5; j++ ){
            b[i][j] =  min ( b[i-1][j], b[i-1][j-1], b[i][j-1] ) + 1;
            if( max < b[i][j] ){
                max = b[i][j];
            }
        }  
    }
    printf("\nNew 2D array...\n");
    for( i = 0; i < max; i++ ){
        for( j = 0; j < max; j++ )
            printf(" 1 ");
        printf("\n");
    }
    return 0;
}

int min( int x, int y, int z){

    if( x < y && x < z )
        return x;

    else if( y < x && y < z )
        return y;

    else
        return z; 
} 
