/*Write a C program to check whether a given substring is present in the given string*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char a[50];
	printf("Input the string :");
	fgets (a, sizeof a, stdin );

	char b[50];
	printf("Input the substring to be search :");
	fgets (b, sizeof b, stdin );
	int l1 = strlen(a) - 1;
    int l2 = strlen(b) - 1;
    int s = 0;
	for(int i = 0; i < l1; i++ ){
		int count = 0;
		int k = i;
		for(int j = 0; j < l2; j++ ){
			if( a[k] != b[j])
				break;
			else if(a[k] == b[j]){
				count++;
				k++;
			}
		}
		if(count == strlen(b) - 1){
			printf("The substring is exists in the string \n\n");
			s += 1;
			break;
		}
	}
	if(s == 0)
		printf("The substring is not exists in the string \n\n");
	return 0;
}
