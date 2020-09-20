// max element in array 
#include<stdio.h>
#include<stdlib.h>
int max( );
int main(){
    int a[5];
    int i;
    printf("Enter the element in array : ");
    for( i = 0; i < 5; i++ ){
        scanf("%d",&a[i]);
    }
    int n = 5;
    printf("The largest element in the array is : %d\n",max(a, n));
    return 0;
}
int max( int *j, int x){
    int i;
    int max1 = *(j);
    for( i = 0; i < x; i++ ){
        if( max1 < *(j+i) )
            max1 = *(j+i);
    }
    return max1;
}
