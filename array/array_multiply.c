/*program for multiplying each element of array by 3 by using modify function*/
#include<stdio.h>
int modify();
void main(){
    int i,a[100];
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf ("\nEnter the element : ");
    for ( i = 0; i < size; i++)
        scanf ("%d",&a[i]);
    modify(a,size);
    printf("\nArray after multiplying each element by 3 : ");
    for ( i = 0; i < size; i++)
        printf ("%d ",a[i]);
    printf("\n");
}
int modify(int *b,int n){
    int i;
    for ( i = 0; i < n; i++)
        *(b+i) *= 3;
}
