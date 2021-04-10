/*Write a C programming to count of each character in a given string. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	char a[50];
	printf("Input the stirng :");
	fgets(a, sizeof a, stdin );
    
    int i = 0;
	int l1 = strlen(a);
	//printf("%d",l1);
    int  b[50];
	for( i = 0; i < l1; i++ ){
		b[i] = -1;
	}
	printf("The count of each character in the string  %s",a);
	for( i = 0; i < l1-1; i++){
        int count = 1;
        if(!(isspace(a[i]))){
            for( int j = i+1; j <= l1; j++ ){
        	   if(a[i] == a[j]){
        		 count += 1;
        		 b[j] = 0;
            	}
            }
            if( b[i] != 0){
        	   b[i] = count;
               printf("%c\t%d\t\n",a[i],b[i]);
            }	
        }
	}
	return 0;
}
