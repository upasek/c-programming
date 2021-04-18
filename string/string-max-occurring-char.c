/* Write a program in C to find maximum occurring character in a string.*/
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
    int max = 0;
    char p;
	for( i = 0; i < l1-1; i++){
        int count = 1;
        if( !(isspace(a[i]))){
            for( int j = i+1; j <= l1; j++ ){
        	    if(a[i] == a[j]){
        		  count += 1;
        	    }
            }
            if( max < count ){
               max = count;
               p = a[i];
            }
        }
	}
    printf("\nThe Highest frequency of character '%c' \n",p);
    printf("\nappears number of times : %d \n\n",max);
	return 0;
}
