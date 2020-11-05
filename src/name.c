// Write a program in C that reads a forename, surname and year of birth and display the names and the year one after another sequentially.
#include<stdio.h>
int main (){
    char n[10], l[10];
    int d;
    printf("\nInput your firstname: ");
    scanf("%s",n);
    printf("\nInput your lastname: ");
    scanf("%s",l);
    printf("\nInput your year of birth: ");
    scanf("%d",&d);
    printf("\n%s  %s  %d \n",n,l,d);
    return 0;
}
