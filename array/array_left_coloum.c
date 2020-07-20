/*return the coloum index having leftmost 1 in array*/
#include<stdio.h>
void show();
int main(){
    int i, j, a[1000][1000], rows, coloum;
    printf ("Enter the no. of rows and coloum : ");
    scanf("%d%d",&rows,&coloum);
    printf ("fill the 2D array with 1 and 0 : "); 
    for ( i = 0; i < rows; i++ ){
        for ( j = 0; j < coloum; j++ )
            scanf ("%d",&a[i][j]);
    }
    show(a,rows,coloum);
    return 0;
}

void show(int a[][1000], int r, int c ){
    int i, j;
    int val;
    for( i = c-1; i >= 0; i-- ){
        for( j = 0; j < r; j++ ){
            if( a[j][i] == 1 ){
                val = i;
                break;
            }  
        }
    }
    printf("\nleftmost coloum = %d \n",val+1);
}
