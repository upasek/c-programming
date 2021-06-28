#include<stdio.h>
void main(){
    // finding symmetri of 2D array or matrix
    // if A is square matrix
    // if A` = A then matrix is symmetric
    // A` = elemenrt in row is equal to element in column 
    int a[10][10], d = 0, i, j, row, col, n = 1, b = 0;
    printf("\nEntre the row and column :\n"); 
    scanf("%d%d",&row,&col);
    printf("Enter the element in array :\n");
    for( i = 0; i < row; i++ ){
        for( j = 0; j < col; j++ )
            scanf("%d",&a[i][j]);
    }
    if( row == col ){
        int z = 1;
        for( i = 0; i < row; i++ ){
            int c = 1;
            for( j = z; j < col; j++ ){
                b++;
                if ( a[i][j] == a[i+c][j-c]){
                    d++;
                }                 
                c++;
            }
            z++;
        }
        if( b == d )
            printf ("\nThe array is symmetric\n");
        else 
            printf ("\nThe array is not symmetric because element in row and column not same \n");
    }
    else
        printf("\nThe array are not symmetric because row and column are not equal \n");
}
