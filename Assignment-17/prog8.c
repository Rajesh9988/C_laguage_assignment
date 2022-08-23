#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[1000],strcp[1000];
    printf("Enter a string:-\n");
    gets(str);
    printf("Copy string is:- %s",strcpy(strcp,str));
}