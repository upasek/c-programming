/* Write a program in C to count total number of alphabets, digits and special characters in a string. */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>// for isalpha, isdigit , ispunct, isspace
int main(){
	char a[50];
	printf("Inout the string :");
	fgets(a, sizeof a, stdin );

	int i = 0;
	int nchar = 0;
	int ndigit = 0;
	int spe = 0;
	while( a[i] != '\0'){
		if ( isalpha(a[i]))
			nchar++;

		else if( isdigit(a[i]))
			ndigit++;

		else if( ispunct(a[i]) || isspace(a[i]) )
			spe++;

		i++;
	}
	printf("Number of Alphabets in the string is : %d \n",nchar);
	printf("Number of Digits in the string is : %d\n",ndigit);
	printf("Number of Special characters in the string is : %d \n",spe-1);
	return 0;
}
