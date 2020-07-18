/*printing element in array by using function*/
#include <stdio.h>
void disp(); 
void main (){
    int i, n;
    int marks[100];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    printf("\nEnter the element in array : ");
    for( i = 0; i < n; i++ )
        scanf("%d",&marks[i]);
    
    printf("\nElement in array : ");
    for ( i = 0; i < n; i++ )
        disp (&marks[i]);

    printf("\n");
}
void disp (int *n){
    printf ("%d ",*n);
}
