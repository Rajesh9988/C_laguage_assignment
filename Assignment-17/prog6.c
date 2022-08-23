#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char string[100];
    char upper;
    printf(" Enter a string:-\n");
    gets(string);
    printf(" String in Uppercase:- %s",strrev(string));

}