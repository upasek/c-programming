#include<stdio.h>
#include<time.h>
int main(){
    int day, month, year, hours, minutes, second;
    time_t t;
    time(&t);
    struct tm *local = localtime(&t);
    hours = local -> tm_hour;
    minutes = local -> tm_min;
    second = local -> tm_sec;
    day = local -> tm_mday;
    month = local-> tm_mon + 1;
    year = local -> tm_year + 1900;
    printf("The current Date and Time is : %s\n",ctime(&t));
    printf("Time is :%02d:%02d:%d\n\n",hours,minutes,second);
    printf("Date is :%02d/%02d/%d\n\n",day, month, year);
    return 0;
}
