/*Write a program in C to check whether a given number is a perfect cube or not*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int num ;
    int cube;
    printf("Enter the number :");
    scanf("%d",&num);
    cube = round(pow( num, 1.0/3.0));
    if(cube*cube*cube == num)
        printf("The number is a perfect Cube of %d \n",cube);
    else
        printf("The number is not a perfect Cube \n");
    return 0;
}
