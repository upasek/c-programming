#include <stdio.h>
void main () {
    int input;
    while(1) {
        printf ("Enter your input : ");
        scanf("%d", &input);
        if (input == 42) { 
            printf("You enter = %d \n",input);
            break;
        }
    }  
}
