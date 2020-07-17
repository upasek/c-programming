/*combine two 2D array*/
#include<stdio.h> 
int main(){
    int i, j, n, m, arr1[3][3], arr2[3][3];
    // fill  arr1 using for loop 
    printf("Enter the element in arr1 array which is 3*3 array: ");
    for ( i = 0; i < 3; i++ ){
        for ( j = 0; j < 3; j++)
            scanf ("%d",&arr1[i][j]);
    }
    // fill arr2 using for loop
    printf ("\nEnter the element in arr2 array which is 3*3 array : ");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++ )
            scanf ("%d",&arr2[i][j]);
    }
    // combine arr2 in arr1
    for ( i = 0; i < 3; i++ ){
        for ( j = 0; j < 3; j++)
            arr1[i+3][j] = arr2[i][j];
    }
    // show result
    printf ("\nResult after when we combine two 2D array....\n\n");
    for (i = 0; i < 6; i++){
        for ( j = 0; j < 3; j++){
           printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
