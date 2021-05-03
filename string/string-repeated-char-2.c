/*Write a C programming to find the repeated character in a given string.*/
//complexity is o(n).
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int kir( char ch, char a[], int l1, int start );
int main(){
	char a[50];
	printf("Input the string :");
	fgets(a, sizeof a, stdin );
    int flag = 0;
    int x = 0;
	for( int i = 0; i < strlen(a) - 1; i++ ){
	   if(kir(a[i], a, strlen(a) - 1, i) ){
	   	printf("\nThe first repetitive character in %s is : %c \n\n",a, a[i]);
	   	flag = 1;
	   	break;
	   }
	}
	if( flag == 0 )
		printf("\nTheir is no repetitive charecter in %s\n\n",a);

	return 0;
}
int kir( char ch, char a[], int l1, int start ){
    
    for(int j = start + 1; j < l1; j++ ){
    	if( ch == a[j]){
    		return 1;
    		break;
    	}
    }
    return 0;
}
