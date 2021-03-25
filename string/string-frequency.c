/*Write a program in C to Find the Frequency of Characters.*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	printf("Input the string :");
	fgets(a, sizeof a, stdin );

	char ch;
	printf("Input the charecter to find frequenc :");
	scanf("%c",&ch);
    int count = 0;
	for(int i = 0; i < strlen(a) - 1; i++ ){
		if( a[i] == ch ){
			count++;
		}
	}
	printf("\nThe Frequency of '%c' is : %d\n\n",ch, count);
	return 0;
}
