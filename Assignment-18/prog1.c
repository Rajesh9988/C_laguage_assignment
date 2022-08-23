#include<stdio.h>
#include<conio.h>
#include<string.h>
int length(char[]);
int main()
{
    char str[100];
    // int len;
    printf("Enter a string:-\n");
     gets(str);
     printf("____________________\n");
     printf("\n");
     
    length(str);
}
int length(char b[])
{
    int i,len;
     len = strlen(b);
     
     for ( i = 0; b[i]; i++);
        printf("|");
        printf(" %d",i);
        printf(" |");
     
    
}