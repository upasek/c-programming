/*Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa.*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[50];
	printf("Input the string :");
	fgets(a, sizeof a, stdin );

	printf("The given sentence is :%s",a);

	atoi(a);
	int i = 0; 
	for( i = 0; i < strlen(a) - 1; i++ ){

		if( a[i] > 64 && a[i] < 91 ){
			a[i] = a[i] + 32;
		}
		else if( a[i] > 96 && a[i] < 123 ){
			a[i] = a[i] - 32;
		}
	}
	
	printf("\nAfter case changed the string is :%s\n\n",a);
	return 0;
}
