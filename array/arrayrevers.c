/*program for reversing the element in array*/
#include <stdio.h>
int main  () {
    int arr[100],i;
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    //accept the from user
    printf ("\nEnter the element: ");
    for (i = 0; i < size; i++)
        scanf ("%d",&arr[i]);
    
    int mid = size / 2;
    int end = size - 1;
    // for loop for reversing the element 
    for (i = 0; i < mid; i++){
        int temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end--;
    }
    // show result 
    printf("\nArray after reversing the element : ");
    for (i = 0; i < size; i++){
        printf ("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
