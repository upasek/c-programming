/*Program for finding maximum and minimum element in given array*/
/*linear search*/
#include <stdio.h>
int main() {
    int inputArray[13] = {21, -5, 3, -131, 44, -90, 6, 32, 34, 55, -17, -4, 171};

    int min = inputArray[0]; 
    for (int i = 1; i < 13; i+=1 ) { 
        if (min > inputArray[i]) {
            min = inputArray[i];
        }      
    }  

    int max = inputArray[0];
    for (int i = 1; i < 13; i +=1){
        if (max < inputArray[i]){
            max = inputArray[i];
        } 
    }
    printf("Minimum number = %d\n", min);
    printf("maximum number = %d\n", max);

    return 0;
}
