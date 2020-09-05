//Write a program in C that takes minutes as input, and display the total number of hours and minutes. 
#include<stdio.h>
int main(){
    int m, output1, output2;
    printf("\nInput minutes: ");
    scanf("%d",&m);
    output1 = m / 60;
    output2 = m % 60;
    printf("\n%d Hours, %d Minutes\n",output1,output2);
    return 0;
}
