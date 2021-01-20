#include<stdio.h>
void main(){
    int a[10], n, m, i, j, p, max;
    printf ("Enter the size of array :");
    scanf ("%d",&n);
    printf ("Enter the element:\n");
    for ( j = 0; j < n; j++ ){
        scanf ("%d",&a[j]);
    } 
    printf ("which large element you have :");
    scanf ("%d",&m);
    for ( i = 0; i < n; i++ ){
        max = i;
        for ( j = i + 1; j < n; j++ ){
            if ( a[max] < a[j]){
                max = j;
            }
        }
        p = a[i];
        a[i] = a[max];
        a[max] = p;
        if ( i == m-1){
            printf ("%d are second large element",a[i]);
            break;
        }
    }
}
