#include<stdio.h>
#include<string.h>
int main(){
	// clrscr(); // clear screen
	char greetings[] = "abcefghijkl";
	printf("%s\n", greetings);

	char s1[20];
	strcpy(s1, greetings);
	printf("%s\n", s1);

	char s2[] = " upase";
	strcat(s1, s2);
	printf("%s\n", s1);

	printf("%ld\n",strlen(s1));

	char s3[] = "kuran";
	char s4[] = "kiranupase";
	char s5[] = "upase kiran";
	char s6[] = "kiran upase";
	char s7[] = "kiran";
	char s8[] = "upase";

	printf("%d\n",strcmp(s1, s3));
	printf("%d\n",strcmp(s1, s4));
	printf("%d\n",strcmp(s1, s5));
    printf("%d\n",strcmp(s1, s6));	
    printf("%d\n",strcmp(s1, s7));
    printf("%d\n",strcmp(s1, s8));

    //printf("%d\n", isalpha(s1, 'a'));
    for (int i = 0; i < 5; i++) 
    	printf("%d\n", s1[i]);

	return 0;
}
