/*Write a program in C to input a string and print it*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[50];
	printf("input the string : ");
	fgets(a, sizeof a, stdin );
    printf("the string you entered is : %s\n",a);
    return 0;
}
