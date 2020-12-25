/*write a program for a quick sort */
#include<stdio.h>
void quicksort(int a[], int low, int high );
int partition(int a[], int low, int high);
void printarray(int a[], int len);
int main(){
    int a[100];
    int low = 0, high;
    printf("Inter the size of array :");
    scanf("%d",&high);
    printf("Inter the element in array :");
    for(int i = 0; i < high; i++ )
     	scanf("%d",&a[i]);
    
    //printf("%d",high);
    quicksort(a, low, high-1);
    printf("\nThe sorted array is :");
    printarray(a, high);
    return 0; 	   
}

void quicksort(int a[], int low, int high){

	if( low < high ){
		int pivotindex = partition(a, low, high);

		quicksort(a, low, pivotindex - 1);
		quicksort(a, pivotindex + 1, high);
	}
}

int partition(int a[], int low, int high){
    int pivot = a[high];
    int iter = low -1;
    for(int j = low; j < high; j++ ){
    	if( pivot > a[j]){
    		iter++;
    		int temp = a[iter];
    		a[iter] = a[j];
    		a[j] = temp;
    	}
    }
    int tem = a[iter+1];
    a[iter+1] = a[high];
    a[high] = tem;
    return iter+1;
}

void printarray(int a[], int len){
	for(int i = 0; i < len; i++ ){
		printf("%d ",a[i]);
	}
	printf("\n\n");
}
