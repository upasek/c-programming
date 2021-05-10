/* Write a program in C to replace the spaces of a string with a specific character.*/
#include<stdio.h>
#include<ctype.h>
int main(){
	char a[50];
	printf("Input a string :");
	fgets(a, sizeof a, stdin );

    char ch;
    printf("Input the specific charecter :");
    scanf("%c",&ch);

	int i = 0;
	while( a[i] != '\0'){
        if( a[i] == ' ')//isspace(a[i]))
        	a[i] = ch;

        i++;
	}

    a[i] = '\0';
    printf("\nAfter replacing the space with  %c the new string is : %s \n\n",ch, a);

	return 0;
}
