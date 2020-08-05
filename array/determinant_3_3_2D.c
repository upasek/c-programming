 /*find determinant of 3*3 2D array*/
#include<stdio.h>
int main(){
      int a[3][3], b, c, d;
      printf("\nEnter the element in 2D array :\n");  
      for( b = 0; b < 3; b++ ){
           for( c = 0; c < 3; c++ )
               scanf("%d",&a[b][c]);
      }      
      b = ( a[1][1]*a[2][2]-a[1][2]*a[2][1] )*a[0][0];
      c = ( a[1][0]*a[2][2]-a[1][2]*a[2][0] )*a[0][1]; 
      d = ( a[1][0]*a[2][1]-a[1][1]*a[2][0] )*a[0][2];   
      printf("\nDeterminenet of 3*3  2D array = %d\n",b-c+d);
      
      return 0;
}
