/*Write a program in C to count the number of punctuation characters exists in a string.*/
#include<stdio.h>
#include<ctype.h>
int main(){
	char a[50];
	printf("Input a string :");
	fgets(a, sizeof a, stdin );

    int i = 0;
    int count = 0;
    while( a[i] != '\0'){
        if(ispunct(a[i]))
            count++;
        i++;
    }

    printf("\nThe punctuation characters exists in the string is : %d \n\n",count);

	return 0;
}
