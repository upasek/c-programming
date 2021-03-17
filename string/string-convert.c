/* Write a C programming to convert vowels into upper case character in a given string.*/
#include<stdio.h>
int main(){
	char a[50];
	printf("Input the string :");
	fgets(a, sizeof a, stdin );
    
    int i = 0;
    while( a[i] != '\0'){
    	if( a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
    		a[i] = a[i] -32;
    	}
    	i++;
    }

    printf("\nAfter converting vowels into upper case the sentence becomes: %s\n\n",a);
	return 0;
}
