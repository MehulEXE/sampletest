#include<stdio.h>
int main(){
    int year;
    printf("enter the the year:");
    scanf("%d", & year);
    if(year % 4==0)
    printf("year %d is a leap year", year);
    else 
    printf("year %d is not a leap year", year);
    return 0;
}