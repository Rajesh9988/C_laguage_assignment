#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[50],ch;
    int i,count;
    count =0;
    printf("Enter a string:-\n");
    gets(str);  
    printf("Enter a charcter which you want to serach:-\n");
    scanf(" %c",&ch); 
    for ( i = 0; i <= strlen(str); i++)
    {
        if (str[i]==ch)
        {
            count++;
        }
        
    }
    printf("character is:- %c has occured %d",ch,count);
    

}