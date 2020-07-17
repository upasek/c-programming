/* insert the new element in a given array */
#include <stdio.h>
int main () {
    int arr[100],n,i,loc,key;
    printf ("Enter the length of array :");
    scanf ("%d",&n);
    
    printf ("\nEnter the value  of  element :");
    for (i=0;i<n;i++) {
        scanf ("%d",&arr[i]);
    }
    
    printf ("\nEnter the location :");
    scanf ("%d",&loc);

    printf ("\nEnter the element which have to locate :");
    scanf ("%d",&key);
    
    for (i=n-1;i>=loc;i--){
        arr[i+1]=arr[i];
    }
    arr[loc]=key;
    printf("\nArray after inserting the element :");
    for (i=0;i<=n;i++){
        printf ("\t%d",arr[i]);
    }
    printf ("\n\n");
    return 0;
}
