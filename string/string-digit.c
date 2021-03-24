/*Write a program in C to check whether a character is digit or not.*/
#include<stdio.h>
int main(){
	char ch;
	printf("Input a charecter :");
	scanf("%c",&ch);

	if( ch >= '0' && ch <= '9')
       printf("\nThe entered character is a digit.\n\n");
	
	else
		printf("\nThe entered character not is a digit.\n\n");	

	return 0;
}
