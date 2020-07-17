/* multiply two 2D array*/
#include<stdio.h>
int main(){
    int i, j, arr1[3][3], arr2[3][3];
    // fill arr1 with element
    printf("Enter the element in arr1 which is 3*3 array : ");
    for( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++)
            scanf("%d",&arr1[i][j]);
    }
    // fill arr2 with element 
    printf("\nEnter the element in arr2 which is 3*3 array : ");
    for( i = 0; i < 3; i++){
        for( j = 0; j < 3; j++)
            scanf("%d",&arr2[i][j]);
    }
    //multiply two 2D array
    printf("\nResult after multiplication ...\n\n");
    for( i = 0; i < 3; i++ ){
        for ( j = 0; j < 3; j++ ){
            arr1[i][j] = arr1[i][j] * arr2[i][j];
            printf ("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
