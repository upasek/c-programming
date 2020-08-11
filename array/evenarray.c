/*Program for spliting odd and even element in array*/
#include<stdio.h>
int main(){
    int arr[8]={8, 2, 3, 4, 5, 6, 7};
    int i, j, n = 0, q, p, a = 0;
    printf("Given array : ");
    for ( i = 0; i < 7; i++ )
        printf(" %d ",arr[i]);
    
    for ( i = 0; i < 7; i++ ){
        if ( arr[i] % 2 == 0){
            p = arr[i];
            for ( j = i - 1; j >= a ; j-- ){
                arr[j + 1] = arr[j];
            }
            arr[a] = p;
            a = a + 1;
        }
    }
    printf ("\nNumber of even element is %d and odd element is %d \n", a, 7-a );
    printf("Array after spliting : ");
    for ( i = 0; i < 7; i++ )
        printf (" %d ",arr[i]);
     
    printf("\n");
    return 0;
}
