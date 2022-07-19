#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if(num%7&&num%3)
    {
        printf("Divisible");
    }
    else
    printf("Not divisible");

}