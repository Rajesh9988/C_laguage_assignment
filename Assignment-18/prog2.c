#include<stdio.h>
#include<conio.h>
#include<string.h>

int reverse(char[]);
int main()
{
    char string[100];
    printf("Enter a string:");
    gets(string);
    reverse(string);
}
int reverse(char str[])
{
    int i;
    printf("Reverse string:\n");
    for ( i = strlen(str); i >=0; i--)
    {
        printf(" %c",str[i]);
    }
    
}