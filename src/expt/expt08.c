#include <stdio.h>
int main()  {
    int x, y;
    printf("Input the value of x : ");
    scanf("%d",&x);
    printf("Input the value of y : ");
    scanf("%d",&y);
  
    if (x > y)
        printf("The value of x is greather than y.\n");
    else
        printf("The value of x is less than y.\n");

    return 0;
}
