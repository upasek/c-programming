/*Write a program in C to check whether a letter is lowercase or not.*/
#include<stdio.h>
int main(){
	char ch;
	printf("Input a charecter :");
	scanf("%c",&ch);

	if( ch >= 'a' && ch <= 'z')
       printf("\nThe entered letter is an LOWERCASE letter.\n\n");
	
	else
		printf("\nThe entered letter is not an LOWERCASE letter.\n\n");	

	return 0;
}