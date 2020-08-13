#include <stdio.h>
int main() {
    int a, b, c;
    
    printf("Input the value of 'a' : ");
    scanf("%d",&a);

    if(a >= 400)
        b = 300;
    else
        b = 400;
    c = 200;
    printf("b = %d\nc = %d \n",b,c);
    
    return 0;
}
