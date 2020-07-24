/* searching element by using binary search || complexity o(logn) */
#include<stdio.h>
int main(){
    int a[100], i, n, key, mid;
    printf("\nEnter the size of array :");
    scanf("%d",&n);
    printf("\nEnter the element in array : ");
    for( i = 0; i < n; i++ )
        scanf("%d",&a[i]);

    printf("\nThe given array is : ");
    for( i = 0; i < n; i++ )
        printf(" %d ",a[i]);
    printf("\n\nEnter the element for search in array : ");
    scanf("%d",&key);
    // finding element 
    int low = 0, high = n-1, z = 0;
    while ( low <= high ){
        mid = ( low + high )/2;
        if( a[mid] > key )
            high = mid-1;
        else if ( a[mid] < key )
            low = mid+1;
        else if ( a[mid] == key ){
            z++;
            printf("\nThe element %d are present in given array at %d possition.\n\n",key,mid);    
            break;
        }
    }
    if(z == 0)
        printf("\nThe element %d are not present in given array.\n\n",key);
    return 0;
}
