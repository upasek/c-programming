//Selection sort

#include<stdio.h>
int main(){
	int size;
	int arr[50];
	printf("Enter the size of array : ");
	scanf("%d",&size);

	printf("\nEnter the element of array : ");
	for(int i = 0; i < size; i++)
		scanf("%d",&arr[i]);

	printf("\nThe given array is : ");
	for(int i = 0; i < size; i++)
		printf("%d ",arr[i]);

	for (int i = 0; i < size - 1; i++){
		int min = i;
		for(int j = i+1; j < size; j++){
			if(arr[j] < arr[min]){
				min = j;
			}		
		}
		int num = arr[i];
		arr[i] = arr[min];
		arr[min] = num; 
	}

	printf("\n\nThe array after sorting : ");
	for(int i = 0; i < size; i++)
		printf("%d ",arr[i]);

	printf("\n\n");
	return 0;
}