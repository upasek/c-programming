#include <stdio.h>
void main(){
    int yr;
    printf("Enter the year:");
    scanf("%d",&yr);
    if (yr%100==0) {
        if (yr%400==0)
            printf("\nleap year");
        else 
            printf ("\nnot a leap year");
    }
    else {
        if (yr%4==0)
            printf("\nleap year");
        else
            printf("\nnot a leap year");
    }  
}
