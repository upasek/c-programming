#include<stdio.h>
void main (){
    // finding unique element in array 
    int a[20], i, j, k, temp, n;
    printf ("Enter the size of array:");
    scanf ("%d",&n);
    printf ("Enter the element :");
    for ( i = 0; i < n; i++ ){
        scanf ("%d",&a[i]);
    }
    int m = n-1;
    printf("\nunique element are : ");
    for ( i = 0; i < n; i++ ){
        for( j = i+1; j <= m; j++ ){
            if( a[i] == a[j]){
                temp = a[j];
                for( k = j; k < m; k++ ){
                    a[k] =a[k+1];
                }
                a[m] = temp;
                m--;
            }
        }
    }
    for( i = 0; i <= m; i++ )
        printf(" %d ",a[i]);
    printf("\n");
}
