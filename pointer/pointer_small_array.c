#include<stdio.h>
void main(){
    // finding small element in array by pointer
    int i,a[10];
    int *p;
    printf ("Enter the element:\n");
    for ( i = 0; i < 10; i++)
        scanf ("%d",&a[i]);
    p = &a[0];
    for ( i = 1; i < 10; i++){
        if ( *p > a[i])
            *p = a[i]; 
    }
    printf ("\n small value = %d \n",*p);
}
