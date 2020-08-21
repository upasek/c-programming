#include <stdio.h>
void main(){
    int a=6;
    int b=4;
    int c=2;
    int result;
    
    printf("The value of a is %d.\nThe value of b is %d.\nThe value c is %d.\n",a,b,c);
    result=a-b+c;
    printf("\nresult = a - b + c\n");
    printf("result : %d\n",result);

    result=a+b/c;
    printf("result = a + b / c\n");
    printf("result : %d\n",result);

    result=(a+b)/c;
    printf("result = (a + b) / c\n");
    printf("result : %d\n",result);
}
