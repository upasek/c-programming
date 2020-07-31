/*program for counting sort*/
#include<stdio.h>
int main(){
    int arr[100];
    int brr[100];
    int n;
    printf("Enter the size of array :"); 
    scanf("%d",&n);
    printf("\nEnter the element in the array :");
    for(int i = 0; i < n; i++ )
        scanf("%d",&arr[i]);

    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < n; i++ ){ // finding the minimum and maximum element in array
        if(max < arr[i])
            max = arr[i];

        if(min > arr[i])
            min = arr[i];
    }

    for(int j = min; j <= max; j++ )// initilize the brr[] with zero
        brr[j] = 0;

    for(int i = 0; i < n; i++ ){  // count all element in array and store in another array 
        int temp = arr[i];      
        brr[temp]++;
    }   

    printf("\nThe sorted array is :");
    for(int j = min; j <= max; j++ ){ // print the sorted array 
        while(brr[j] > 0){
            printf("%d ", j);
            brr[j]--;
        }
    } 
    printf("\n");
    return 0;
}
