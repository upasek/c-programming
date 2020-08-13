/*Take inputs from user and display*/
#include <stdio.h>
void main () {
    int i;
    float f;
    char c;
    printf("enter an integer,float and character : ");
    scanf("%d %f %c", &i, &f, &c);

    printf("Values entered are : \n");
    printf("Integer value : %d\n",i);
    printf("Float value : %f\n",f);
    printf("Character : %c\n",c);
}
