/*finding the sum of the first seven terms*/
#include <stdio.h>
int main (){
    float i, num;
    float sum = 0;
    for ( i = 1; i < 8; i++ ){
        float facto = 1;
        num = i;
        while( num > 0 ){
            facto = facto * num;
            num--;
        }
        sum = sum + ( i / facto );
    }       
    printf ("sum of first seven terms is : %f\n",sum);
    return 0;
}
