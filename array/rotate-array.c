#include<stdio.h>
void main(){
    //  Write a program in C to rotate an array by N positions.
    int a[20], i, m, n, j;
    printf("\nEntter the size of array :");
    scanf("%d",&n);
    printf("\nEnter the element in array :");
    for( i = 0; i < n; i++ )
        scanf("%d",&a[i]);

    printf("\nThe given array is :");
    for( i = 0; i < n; i++ )
        printf(" %d ",a[i]);
    // position for shifting    
    printf("\n\nEnter the position where the value are rotate :");
    scanf("%d",&m);

    printf("\nFrom %d position the values of the array are : ",m);
    for( i = m; i < n; i++ )
        printf(" %d ",a[i]);

    printf("\n\nBefore %d position the values of the array are : ",m);
    for( i = 0; i < m; i++ )
        printf(" %d ",a[i]);
    // shifting
    printf("\n");
    for( i = 0; i < m; i++ ){
        int t = a[0];
        for( j = 0; j < n; j++ ){
            a[j] = a[j+1];
        }
        a[n-1] = t;
    }
    printf("\nAfter rotating from %d position the array is:",m);
    for( i = 0; i < n; i++ )
        printf(" %d ",a[i]);
    printf("\n");
}
