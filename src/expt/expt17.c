#include <stdio.h>
int main(){ 
    int voltage = 50;
    int current = 5;
    int power;

    power = voltage * current;
    printf("The power is : %d\n",power);

    return 0;
}
