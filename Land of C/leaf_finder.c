/*
Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.
*/

//solution

#include <stdio.h>

int main () {
    


    int year;
    printf("enter the year");
    scanf("%d",&year);

    if ((year% 4==0 && year%100 !=0 )|| year%400==0)
    {
        printf("the %d is a leap year", year);

    }

    else 
    {
        printf("the  %d is not  leap year", year);
    }

    return 0;
}