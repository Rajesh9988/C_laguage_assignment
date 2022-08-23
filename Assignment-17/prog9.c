#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char str[100],ch;
    int i,j,leanth;
    printf(" Enter a string:-\n");
    gets(str);
    leanth  = strlen(str);
    for ( i = 1; i < leanth; i++)
    {
        for ( j = 0; j<leanth-i; j++)
        {
            if (str[j]>str[j+1])
            {
                ch  = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
            
        }
        
}
    printf(" %s\n",str);
}
