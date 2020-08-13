/*Condition*/
#include <stdio.h>
int main () {
    int input = -1; //variable 
    int x = 1234;
    // 1 = true; 0 = false
    while(x >= 234) {
        printf("Enter your input : ");
        scanf("%d", &input);
        if (input == 2) {
            break;
        } 
        else {
            printf("Invalid input.. please try again!\n");
        }
    }
    printf("Congrats! Your input has been accepted!\n");
    return 0;
}
