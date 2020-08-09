/*finding two matrix are equal or not */
#include<stdio.h>
int main(){
    int a[100][100], b[100][100], i, j, n, m, c = 0, d;
    printf("Enter the number of rows and colum of  matrix : ");
    scanf("%d%d",&n,&m);

    printf("Enter the element in 1st matrix : \n");
    for( i = 0; i < n; i++ ){
        for( j = 0; j < m; j++ )
            scanf("%d",&a[i][j]);
    }

    printf("\nEnter the element in 2nd matrix :\n");
    for( i = 0; i < n; i++ ){
        for( j = 0; j < m; j++ )
            scanf("%d",&b[i][j]);
    }

    d = n * m;
    for( i = 0; i < n; i++ ){
        for( j = 0; j < m; j++ ){
            if( a[i][j] == b[i][j])
                c++;
        }
    }

    printf("\nThe matrix can be compared : ");
    if( d == c)
        printf("Two matrix are equal.\n");
    else
        printf("Two matrix are not equal.\n");

    return 0;
}
