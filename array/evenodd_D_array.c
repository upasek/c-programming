/*Program for make two different array that contain even and odd element from single array*/
#include <stdio.h>
int main (){
    int a[100], b[100], c[100], i, n, count1 = 0, count2 = 0;
    printf ("Enter the size of arra : ");
    scanf ("%d",&n);

    printf ("\nEnter the element : ");
    for ( i = 0; i < n; i++ )
        scanf ("%d",&a[i]);
    
    for ( i = 0; i < n; i++ ){
        if ( a[i] % 2 == 0){
            b[count1] = a[i];
            count1++;
        }
        else if ( a[i] % 2 != 0 ){
            c[count2] = a[i];
            count2++;
        }
    }   
    
    //display first array
    printf("\nArray containing even elements : ");
    for ( i = 0; i < count1; i++ )
        printf (" %d ",b[i]);

    printf ("\n\n");
    
    //display second array
    printf("Array containing odd elements : ");
    for ( i = 0; i < count2; i++ )
        printf (" %d ",c[i]);

    printf("\n");
    
    return 0;
}
