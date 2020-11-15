#include <stdio.h>
void main() {
    //scan input
    //decide if it is odd or even
    //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
    //odd: 1 3 5 7 9 11 13 15 17 19
    //even: 2 4 6 8 10 12 14 16 18
    int input = 0;
    int counter = 0;

    printf("Enter the count of the numbers you want to process = ");
    scanf("%d", &counter);
    int x = counter;
    while(1) {
        scanf("%d", &input);
        if (input % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
        counter = counter - 1; // count++; count += 1
        if (counter == 0) {
            printf("Already processed %d numbers. Stopping now!\n", x);
            break;
        }
    }
}





