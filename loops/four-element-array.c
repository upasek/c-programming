// Write a program in C to find four array elements whose sum is equal to given number.

#include <stdio.h>
int main (){
    int a[] = {3, 7, 1, 9, 15, 14, 6, 2, 5, 7};
    int i, j, k, l;
    int num = 37, item = 0;

    printf("The given array is : ");
    for (i = 0; i < 10; i++)
        printf(" %d ",a[i]);

    printf("\nThe elements are : ");
    for (i = 0; i < 10-3; i++ ){
        for (j = i+1; j < 10-2; j++ ){
            for (k = j+1; j < 10-1; j++ ){
                for (l = k+1; l < 10; l++ ){
                    if ( (a[i] + a[j] + a[k] + a[l]) == num){
                        printf("\n%d %d %d %d ",a[i], a[j], a[k], a[l]);
                        item++;
                    }
                }
            }
        }
    }

    if (item == 0)
        printf("\nThere is no any elements in array who's sum is %d",num);

    printf("\n");
    return 0;
}
