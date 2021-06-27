#include<stdio.h>
int swap();
int main(){
    int num1, num2;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);

    printf("Before swapping: n1 = %d, n2 = %d", num1, num2);
    swap( &num1, &num2 );
    printf("\nAfter swapping: n1 = %d, n2 = %d\n",num1, num2);
    return 0;
}
int swap ( int *x, int *y ){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return *x, *y;
}
