/*program for finding the average marks of student*/
#include <stdio.h>
int main () {
    int sum=0;
    float avg;
    int i, size;
    int marks[100]; // array declaration 
    printf("Enter the number of student : ");
    scanf("%d",&size);
    for (i = 0; i < size; i++){
        printf ("\nEnter the marks of %d student :",i+1);
        scanf ("%d",&marks[i]); // store data in array
    }

    for (i = 0; i < size; i++)
        sum = sum + marks[i]; // read the data from array 

    avg = sum / size ;

    printf ("\nAverage marks of all student = %.3f\n",avg);
    return 0;
}
