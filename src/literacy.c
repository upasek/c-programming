#include <stdio.h>
void main () {

    /* calculation of illiterate men and women */
    /* total literacy = a , total literate men = b  , total men = c ,total literate women = d = a - b  */
    /* tatal population = z = 80000 */
    /* literate men = e , literate women = f , illiterate men = i , illiterate women = j*/
    /* total men = g  , total women = h  */

    int a=48 , b=35 ,z=80000 , c=52;
    int e,f,g,h,i,j;
    
    printf("Total literacy = %d\n",a);
    printf("Total literate men = %d\n",b);
    printf("Total men = %d\n",c);
    printf("Total population = %d\n",z);
    e = b*z / 100 ;

    f = (a-b)*z / 100 ;

    g = c*z /100  ;

    h = (100-52)*z /100 ;


    i = g - e ;

    printf ("\nIlliterate men = %d",i);

    j = h - f ;

    printf ("\nIlliterate women = %d\n",j);

}
