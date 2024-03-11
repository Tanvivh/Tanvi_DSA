//To check if entered year is leap year or not
#include<stdio.h>
main()
{
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if (year%400==0)
        {printf("%d is a leap year",year);}
    else if (year%4==0)
        {printf("%d is a leap year",year);}
    else if (year%100==0)
       {

        printf("%d is not a leap year",year);}
    else
       {

        printf("%d is not a leap year",year);}
    }
