/* find distance in meter , feet , inches, cntimeter */
#include <stdio.h>
int main() {
    int a ;
    float meter ,feet, inches, centimeter ;

    printf ("The distance between two cities in kilometer  : ");
    scanf ("%d",&a);

    meter = a*1000;

    printf ("The distance in meter : %f\n",meter);

    feet = a*1000*3.3;

    printf ("The distance in feet : %f\n",feet);

    inches = a*39370.079;

    printf ("The distance in inches : %f\n",inches);

    centimeter = a*100000;

    printf ("The distance in centimeter : %f\n",centimeter);
    return 0;
}
