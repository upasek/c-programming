#include<stdio.h>
#include<math.h>
int main(){
    int a[10][10], i, j, sum = 0, row, col;
    float b;
    printf("Enter the number of row and column :\n");
    scanf("%d%d",&row,&col);
    printf("Enter the element in array :\n");
    for( i = 0; i < row; i++ ){
        for( j = 0; j < col; j++ )
            scanf("%d",&a[i][j]);
    }
    for( i = 0; i < row; i++ ){
        for( j = 0; j < col; j++ )
            sum = sum + a[i][j] * a[i][j];
    }
    b = sqrt(sum);
    printf("\nThe norm value is  %0.2f\n",b);
    return 0;
}
