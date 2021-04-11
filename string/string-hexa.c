/*Write a program in C to check whether a character is Hexadecimal Digit or not.*/
#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Input a charecter :");
	scanf("%c",&ch);

	if( isxdigit(ch) )
       printf("\nThe entered character is a hexadecimal digit.\n\n");
	
	else
		printf("\nThe entered character is not a hexadecimal digit.\n\n");

	return 0;
}
