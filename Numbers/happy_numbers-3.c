/*. Write a program in C to find the happy numbers between 1 to 1000*/
#include<stdio.h>
int main(){
    int i, p;
    printf("The happy numbers between 1 to 1000 are: \n");
    printf("------------------------------------------------\n");
    for(i = 1; i <= 1000; i++ ){
        int sum = 0;
        int y = i;
        while(sum != 1 && sum != 4){
            sum = 0;
            while ( y > 0){
                p = y % 10;
                sum = sum + (p*p);
                y = y / 10;
            }
            y = sum;
        }
        if( sum == 1){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
