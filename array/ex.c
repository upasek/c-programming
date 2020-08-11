#include<stdio.h>
int main(){
    int a[] = {1, 2, 56, 45, 45};

    printf("The size of array is = %ld",sizeof(a)/sizeof(a[0]));
    printf("\n");
    printf("The given array is : ");
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++ )
        printf(" %d ",a[i]);

    printf("\n");
    return 0;
}
