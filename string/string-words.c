/*Write a program in C to count the total number of words in a string.*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	int l = 0;
	printf("input the string :");
	fgets (a , sizeof a, stdin );

	int i = 0;
    int w = 1;
    while ( a[i] != '\0'){
    	if( a[i] == ' ' || a[i] == '\n' || a[i] == '\t')
    		w++;

    	i++;
    }
    printf("Total number of words in the string is : %d \n",w-1);
    return 0;	
}
