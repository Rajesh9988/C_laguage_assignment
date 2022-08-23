#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int temp[150]={0};
    int i,j,count;
    printf("Enter a string:\n");
    gets(str);
    while(str[i]!='\0')
    {
        temp[str[i]]++;
        i++;
    }
    for ( i = 0; i <150; i++)
    {
        if (temp[i]!=0)
        {
            printf("%c  =>  %d\n",i,temp[i]);
        }
        
    }
    return 0;

}