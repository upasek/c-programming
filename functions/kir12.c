#include <stdio.h>
#define kiran 7.0

int addNumbers() {
    return 3 + 2;    
}

float addAnotherNums() {
    return 3.0 + 2.0;
}

void main() {
    printf("I love programming\n");
    // printf("product = %d\n", kiran*kiran);
    printf("Result = %f\n",kiran/3);
    // printf("Addition this time = %f\n", kiran/3);
    printf("The value return from addnumbers function : %d\n",addNumbers());

    printf("The value return from addAnotherNums function : %f\n",addAnotherNums());
}
