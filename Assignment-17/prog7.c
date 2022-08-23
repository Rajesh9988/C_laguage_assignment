#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[100];
    int digit=0,alphabte=0,special=0,i;
    printf("Enter a string:-\n");
    gets(str);
    for ( i = 0; i < strlen(str); i++)
    {
        if (str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)
        {
            alphabte++;
        }
        else if (str[i]>=48 && str[i]<=57)
        {
            digit++;
        }
        else{
            special++;
        }
        
    }
    printf("Number of alphabte is:- %d\n",alphabte);
    printf("Number of digits is:- %d\n",digit);
    printf("Number of special character is :- %d\n",special);
    
}