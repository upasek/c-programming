//Write a program in C to find the ceiling in a sorted array.
// complexity is o(n).
// here we use linner search
#include<stdio.h>
int main(){
    int arr[100];
    int num, n, i;
    printf("Enter the size of array :");
    scanf("%d",&n);

    printf("\nEnter the element in array :");
    for( i = 0; i < n; i++ )
        scanf("%d",&arr[i]);

    printf("\nThe given array is : ");
    for( i = 0 ; i < n; i++ )
        printf(" %d ",arr[i]);

    printf("\n\nEnter the element for which we cheak the celling value : ");
    scanf("%d",&num);

    int low = 0, high = n-1;
    for( int i = low; i < high; i++ ){
        if( arr[i] == num ){
            printf("\nThe celling of %d is : %d \n",num,arr[i]);
            break;
        }
        else if ( arr[i] < num && arr[i+1] >= num ){
            printf("\nThe celling of %d is : %d \n",num,arr[i+1]);
            break; 
        }
    }
    return 0;
}
