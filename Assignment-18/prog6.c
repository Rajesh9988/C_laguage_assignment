#include <stdio.h>
#include <string.h>

void myfunc(char a[])
{
    int i,count;
    if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z'||a[i]>0&a[i]<=9)
        {
         printf("String is alphanumeric\n");
        }  
}
int main()
{
    char str[20];
    int len=0;
    printf("Enter a string:\n");
    gets(str);
    len = strlen(str);
    myfunc(str);
}