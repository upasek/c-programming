#include<stdio.h>
void main(){
     int a[10], i, j, n, m, p, min;
     printf ("Enter the size of array:");
     scanf ("%d",&n);
     printf ("Enter the element:\n");
     for ( i = 0; i < n; i++ ){
         scanf ("%d",&a[i]);
     }
     printf ("which small element you have :");
     scanf ("%d",&m);
     for ( i = 0; i < n; i++ ){
         min = i;
         for ( j = i + 1; j < n; j++ ){
              if ( a[min] > a[j] ){
                  min = j;
              }
         }
         p = a[i];
         a[i] = a[min];
         a[min] = p;
         if ( i == m-1){
             printf ("%d  small element",a[i]);
             break;
         }
     }
}
