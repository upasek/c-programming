/*. Write a C programming to find the repeated character in a given string*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char a[50];
	printf("Input the string :");
	fgets(a, sizeof a, stdin );
    int flag = 0;
    int x = 0;
	for( int i = 0; i < strlen(a) - 1; i++ ){
	   for( int j = i+1; j < strlen(a) - 1; j++ ){
			if( a[i] == a[j]){
				printf("\nThe first repetitive character in %s is : %c \n\n",a,a[i]);
				flag = 1;
				break;
		    }
		}
         if( flag == 1 )
        	break;
	}
	if( flag == 0 )
		printf("Their is no repetitive charecter in %s",a);

	return 0;
}
