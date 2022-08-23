#include <stdio.h>
#include <string.h>
int count(char a[], int len)
{
    int i,coun=1;
    for (i = 0; i < len; i++)
    {
        if (a[i]==" "||a[i+1]!=" ")
        {
            coun++;  
        }
        
    }
        printf(" %d", coun);
}
int main()
{
    char string[30];
    int len;
    printf("Enter a string:\n");
    gets(string);
    len = strlen(string);
    printf("World in the string is:-");
    count(string, len);
}