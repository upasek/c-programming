#include <stdio.h>
int main () {
    int arr[6],i;
    printf("Enter 6 integers: ");
    for ( int i=0; i<6; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nReceived input = ");
    for (int j = 0; j < 6; j++) {
        printf(" %d ", arr[j]);
    }
    printf("\nThe prime number is : ");
    for( i = 0; i < 6; i++){
        int c = 0;
        for (int k = 2; k < arr[i]; k++){
            if (arr[i] % k == 0) {
                c++;
            }
        }
        if( c == 0 && arr[i] != 1)
            printf(" %d ",arr[i]);
    }
    printf("\n");
    return 0;
}
