#include<stdio.h>
int main(){
	char greetings[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	printf("Greetings are: %s\n", greetings);


	char greetings_2[6] = {'h', 'e', 'l', 'l', 'o'};
	printf("2nd Greetings are: %s\n", greetings_2);

	char greetings_3[5];

	for (int i = 0; i < 5; i++) {
		greetings_3[i] = greetings_2[i];
	} 
	printf("Copied Greetings are: %s\n", greetings_3);
	return 0;
}    
