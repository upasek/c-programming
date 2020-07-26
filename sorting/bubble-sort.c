/*program for bubble sort with some changes in if() statement*/
#include<stdio.h>
int main (){
    int a[100];
    int n, temp;
    printf("Inter the size of array : ");
    scanf("%d",&n);
    printf("\nInter the element in array : ");
    for(int i = 0; i < n; i++ )
     	scanf("%d",&a[i]);

    for( int i = 0; i < n; i++ ){     
        for(int j = 0; j < n; j++ ){
        	if( a[i] < a[j]){
               temp = a[j];
               a[j] = a[i];
               a[i] = temp;
        	}
        }
    }
    printf("\nSorted element in array : ");
    for( int i = 0; i < n; i++)
    	printf("%d ",a[i]);
    printf("\n\n");
	return 0;
}
