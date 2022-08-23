#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[3][20];
    int i,j;
    printf("Enter Stirngs:\n");
    for ( i = 0; i <3; i++)
    {
        gets(str[i]);
    }
    printf("\n");
    for ( i = 0; i< 3; i++)
    {
            printf("str %d => %s\n",i,str[i]);
    }
}