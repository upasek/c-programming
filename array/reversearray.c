#include <stdio.h>
void main (){
    int a[10],b[10], i, j, n, z = 0;
    printf ("Enter the size of array : ");
    scanf ("%d",&n);
    printf ("Enter the value of element : ");
    for ( i = 0; i < n; i++ ){
        scanf ("%d",&a[i]);
    }

    for ( i = n - 1; i >= 0; i--){
        b[z] = a[i];
        z = z + 1;
    }

    printf("Array after reversing : ");
    for ( j = 0; j < n; j++ ){
        printf (" %d ",b[j]);
    }
    printf ("\n");
}
