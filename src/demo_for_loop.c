/*program for showing how for loop are works*/
#include<stdio.h> 
int main() {
    printf("Number from 0 to 100 with difference 5 : "); 
    for(int x = 0; x <= 100; x += 5)
        printf("%d ", x);
  
    printf("\n");
    return 0;
}
