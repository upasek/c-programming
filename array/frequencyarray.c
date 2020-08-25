/*program for finding frequence of all elements in array*/
#include <stdio.h>
int main (){
    int a[10], b[10], i, j, n;
    
    printf ("Enter the size of array:");
    scanf ("%d",&n);
    
    printf ("Enter the element : ");
    for ( i = 0; i < n; i++ ){
        scanf ("%d",&a[i]);
        b[i] = -1;
    }
    for ( i = 0; i < n; i++ ){
        int count = 1;
        for ( j = i + 1; j < n; j++ ){
            if ( a[i] == a[j] ){
                count = count + 1;
                b[j] = 0;
            }

        }
        if ( b[i] != 0 ){
            b[i] = count;
            printf ("%d occure %d times \n",a[i],b[i]);
        }

    }
    /* for ( i = 0; i < n; i++ ){
       if ( b[i] != 0 ){
       printf ("%d 0ccure %d times\n",a[i],b[i]);  
       } 
       }*/
    return 0;
}
