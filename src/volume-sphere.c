/*Write a C program that calculates the volume of a sphere.*/
#include<stdio.h>
int main(){
    float volume, r ;
    printf("\nInput the radius of the sphere : ");
    scanf("%f",&r);
    // vloumr of sphere = 4/3 * 3.14 * r^3;
    volume = 1.333333 * 3.14 * r * r * r;
    printf("\nThe volume of sphere : %f\n",volume);
    return 0;
}
