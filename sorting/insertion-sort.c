/*sorted array by insertion sort*/
#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("Inter the size of array :");
    scanf("%d",&n);
    printf("Enter the element in array :");
    for(int i = 0; i < n; i++ )
    	scanf("%d",&a[i]);
  
    for(int i = 0; i < n; i++ ){     //  for(int i = 1; i < n; i++){
        int j = i;                   //      int key = a[i];
        int k = i;                   //      j = i - 1;
        while( j >= 0){              //    while( j >= 0 && a[j] > key){ 
        	if(a[k] < a[j]){         //       a[j+1] = key;
        		int temp = a[k];     //        j--; 
        		a[k] = a[j];         //    }
        		a[j] = temp;         //   a[j+1] = key;
                k--;                 //  }
            }                       
       	  j--;
       	}
    }               

    printf("\nThe sorted array is :");
    for(int i = 0; i < n; i++ )
    	printf("%d ",a[i]);
    printf("\n");
	return 0;
}
