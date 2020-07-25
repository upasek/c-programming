/*program for bonus*/
#include <stdio.h>
int main(){
    int bonus = 2500, cy , yoj , year ;
    printf ("Enter the current year :");
    scanf ("%d",&cy);
    printf("Enter the year of joining :");
    scanf("%d",&yoj);
    year = cy - yoj;

    if (year > 3 ) //if difference between current year and year of joining is greather than 3
        printf ("\nbonus = %d \n", bonus );

    return 0;
}
