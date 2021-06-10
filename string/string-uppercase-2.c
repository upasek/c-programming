/*Write a program in C to check whether a letter is uppercase or not.*/
#include<stdio.h>
int main(){
	char ch;
	printf("Input a charecter :");
	scanf("%c",&ch);

	if( ch >= 'A' && ch <= 'Z')
       printf("\nThe entered letter is an UPPERCASE letter.\n\n");
	
	else
		printf("\nThe entered letter is not an UPPERCASE letter.\n\n");	

	return 0;
}
