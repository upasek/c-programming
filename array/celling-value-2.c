//Write a program in C to find the ceiling in a sorted array.
// complexity is o(logn).
// here we use binary  search
#include<stdio.h>
int main(){
    int a[100];
    int i, n, num, mid;
    printf("Enter the size of array :");
    scanf("%d",&n);
    
    printf("\nEnter the element in array :");
    for( i = 0; i < n; i++ )
        scanf("%d",&a[i]);
    
    printf("\nThe given array is : ");
    for ( i = 0; i < n; i++ )
        printf(" %d ",a[i]);
    
    printf("\n\nEnter the element for which we cheak the celling value :");
    scanf("%d",&num); 
    
    int low = 0, high = n-1;
    while( low <= high ){
        mid = (low+high)/2;
        if( a[mid] == num ){
            printf("\nThe celling of %d is : %d\n",num,a[mid]);
            break;
        }
        else if ( a[mid] < num )
            low = mid;
        else if( a[mid] > num )
            high = mid;

        if(a[low] == num){
            printf("\nThe celling of %d is : %d\n",num,a[low]);
            break;
        }
        else if(high == low+1){
            printf("\nThe celling of %d is : %d\n",num,a[high]);
            break;    
        }
    }
    return 0;
}             
