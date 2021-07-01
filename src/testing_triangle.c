#include<stdio.h>
void main(){
    float a,b,c;
    printf ("Enter the three angles :\n");
    scanf ("%f%f%f",&a,&b,&c);
// cheak triangle is isosceles ,equilateral,scalene .
    if ( a == b && b == c ){
        printf ("the triangle  is equilateral triangle ");
    }
    else if ( a == b || a == c || b == c ){
        printf ("The triangle is isosceles triangle");
    }
    else if ( a != b && b != c ){
        printf ("The triangle is scalene triangle");
    }

}
