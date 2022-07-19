// write a programm to print date ---------->>>>>>>>>>>

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dd, mm, yyyy;
    printf("Enter a Date:-\n");
    scanf("%d", &dd);
    printf("Enter a Month:-\n");
    scanf("%d", &mm);
    printf("Enter a Year:-\n");
    scanf("%d", &yyyy);
    printf("Date- %d Month-%d Year-%d", dd, mm, yyyy);
}