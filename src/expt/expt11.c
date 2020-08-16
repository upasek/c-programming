/*condition*/
#include <stdio.h>
int main() {
    
    float a, b;
    printf("Input the floating value of a : ");
    scanf("%f",&a);
    printf("Input the floating value of b : ");
    scanf("%f",&b);

    if (a < b)
        printf("a is less than b.\n");
    else if (b < a)
        printf("b is less than a.\n");
    else if (a == b)
        printf("a and b are equal.\n");
    
    return 0;
}
