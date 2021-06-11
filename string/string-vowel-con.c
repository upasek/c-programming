/*Write a program in C to count total number of vowel or consonant in a string.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main () {
    char a[50];
    printf("Input the string :");
    fgets(a, sizeof a, stdin );
    
    int i = 0;
    int count = 0;
    int con = 0;
    while( a[i] != '\0'){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' )
            count++;
        else if( (a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') )
            con++;

        i++;
    }

    printf("The total number vowel in the string is : %d\n",count); 
    printf("The total number of consonant in the string is : %d\n",con);

    return 0;
}
