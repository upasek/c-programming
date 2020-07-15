/*The program for finding the charecter are vowel or consonant*/
#include<stdio.h>
int main(){
    char ch ;
    printf ("Enter any charecter :");
    scanf ("%c",&ch);
    if ( ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch =='O'||ch == 'U'){
        printf ("\nThe charecter %c is vowel\n",ch);
    }
    else if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z' )){
        printf ("\nThe charecter %c is consonant\n",ch);
    }
    else
        printf ("\nThey are special charecter\n");
    return 0;
}
