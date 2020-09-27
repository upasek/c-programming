#include<stdio.h>
void display( int b[]);
void main() {
    // left shift in 2D array by using 1D array 
    int c[20], a[4][5], i, j;
    printf("Enter the 20 element in array :");
    for ( i = 0; i < 4; i++ ){
        for ( j = 0; j < 5; j++ )
            scanf("%d",&a[i][j]);
    }
    // show result before shifting 
    // convert 2D array in 1D array
    printf("Befour shifting...\n");
    int  d = 0;
    for( i = 0; i < 4; i++ ){
        for( j = 0; j < 5; j++ ){
            printf("%d\t",a[i][j]);
            c[d++] = a[i][j];
        }
        printf("\n");
    }
    display(c);
}
void display( int b[] ){
    // shifting 2 element left side 
    int  i, j;
    printf("\n\n");
    int o = 0;
    while( o < 2 ){
        int temp = b[0];
        for( i = 0; i < 20; i++)
            b[i] = b[i+1];

        b[19] = temp;
        o++;  
    }
    // show result after shifting 
    int u = 0, z[4][5];
    printf("After shifting...\n");
    for ( i = 0; i < 4; i++){
        for( j = 0; j < 5; j++){
            z[i][j] = b[u++];
            printf("%d\t",z[i][j]);
        }
        printf("\n");
    }
}
