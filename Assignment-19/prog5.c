#include<stdio.h>
#include<string.h>

int main()
{
    char str[2][20];
    int i,j;
    fflush(0);
    printf("Enter Email adress:\n");
    for ( i = 0; i <2; i++)
    {
        gets(str[i]);
    }
    for ( i = 0; i <2; i++)
    {
        if (strchr(str[i],'@')!=0)
        {
            printf("%s\n",str[i]);
        }
    }
    return 0;
    
}