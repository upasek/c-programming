/*Write a program in C to count all distinct pairs for a specific difference.*/
#include<stdio.h>
void main(){
    int a[] = {5, 2, 3, 7, 6, 4, 9, 8};
    int i, j, num, count = 0;
    printf("\nThe given array is:");
    for( i = 0; i < 8; i++ )
        printf(" %d ",a[i]);
    
    printf("\n\nEnter the difference :");
    scanf("%d",&num);
   
    printf("\nThe distinct pairs for difference %d are: ",num);
    for( i = 0; i < 8; i++ ){
        for( j = i+1; j < 8; j++ ){
            if( a[i] - a[j] == num || a[i] - a[j] == -(num) ){
                if( a[i] > a[j] )
                    printf("[%d, %d]",a[i],a[j]);
                else 
                    printf("[%d, %d]",a[j],a[i]);  
                count++;
            }
        }
    }
    printf("\n\nNumber of distinct pairs for difference %d are: %d\n",num,count);
}
