#include<stdio.h>
#include<conio.h>

int main()
{
    int mon;
    printf("Enter a month\n");
    scanf("%d",&mon);

    switch (mon)
    {
    case 1:
        printf("January\n");
        printf("Day of this month is:- 31");
        break;
    case 2:
        printf("feburary\n");
        printf("Day of this month is:- 28");
        break;
    case 3:
        printf("march\n");
        printf("Day of this month is:- 31");
        break;
    case 4:
        printf("april\n");
        printf("Day of this month is:- 30");
        break;
    case 5:
        printf("May\n");
        printf("Day of this month is:- 31");
        break;
    case 6:
        printf("June\n");
        printf("Day of this month is:- 30");
        break;
    case 7:
        printf("Julay\n");
        printf("Day of this month is:- 31");
        break;
    case 8:
        printf("august\n");
        printf("Day of this month is:- 31");
        break;
    case 9:
        printf("september\n");
        printf("Day of this month is:-30");
        break;
    case 10:
        printf("october\n");
        printf("Day of this month is:- 31");
        break;
    case 11:
        printf("november\n");
        printf("Day of this month is:- 30");
        break;
    case 12:
        printf("december\n");
        printf("Day of this month is:- 31");
        break;    
    default:
    printf("Enter invalid month");
        break;
    }
}