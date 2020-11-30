#include<stdio.h>
void main(){
    //83. Write a program in C to find a pair with the given difference. 
    int a[] = {1, 15, 39, 75, 92};
    int i, j, num = 53;
    printf("\nThe given array is : ");
    for( i = 0; i < 5; i++ )
        printf(" %d ",a[i]);
    printf("\nThe given difference is: %d ",num);
    printf("\nThe pair are: ");
    for( i = 0; i < 5; i++ ){
        for( j = i+1; j < 5; j++ ){
            if( a[i]-a[j] == num || a[i]-a[j] == -(num) ){
                printf("(%d, %d)",a[i],a[j]);
                break;
            }
        }
    }  
}
