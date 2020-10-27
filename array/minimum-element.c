#include<stdio.h>
void main(){
    //Write a program in C to find minimum element in a sorted and rotated array. 
    //by binary search
    int a[7] = {3, 4, 5, 6, 7, 8, 2};
    int i, j, low = 0, high = 6;
    printf("\nThe given array is : ");
    for( i = 0; i < 7; i++ )
        printf(" %d ",a[i]);
    int min ;
    while ( low <= high  ){
        int mid = (low+high)/2;
        if( low < mid && a[mid] > a[mid-1]){
            min = a[mid+1];
            low = mid;
        }
        if( high > mid && a[mid+1] < a[mid]){
            min = a[mid+1];
        }
        else if( a[high] > a[mid]){
            high = mid - 1;
        }
        else if
            low = mid + 1;
        else if( )
        printf("\nThe minimum element in the above array is: %d\n",min);
        break;
    }
}
