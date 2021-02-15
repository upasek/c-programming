/* Write a program in C to find the length of a string without using library function. */
#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	int l = 0;
	printf("input the string :");
	//scanf("%s",a);
	//fgets(a, sizeof a, stdin);
    //printf("length of the string is : %ld \n",strlen(a)-1);
 
     fgets(a, sizeof a, stdin );
     while( a[l] != '\0'){
     	l++;
     }
     printf("length of the string is : %d \n",l-1);
     return 0;
} 
