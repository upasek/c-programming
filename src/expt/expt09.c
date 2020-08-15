#include <stdio.h>
int main() {
    int x;
    float y;
    printf("Input the integer value of x : ");
    scanf("%d",&x);
    printf("Input the floating value of y : ");
    scanf("%f",&y);

    if (x == y)
        printf("\nx and y are equal.\n");
    else 
        printf("\nx and y are not equal\n.");
    
    return 0;
} 
