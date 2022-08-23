#include<stdio.h>
#include<conio.h>
#include<string.h>
int compare(char a[],char b[])
{
    int i;
    for ( i = 0; i < 20; i++)
    {
        return strcmp(a,b);
    }
    
}
int main()
{
    char str1[20],str2[20];
    printf("Enter string one:-\n");
    gets(str1);
    printf("Enter string two:-\n");
    gets(str2);
    char x;
   x = compare(str1,str2);
   if (x==0)
   {
    printf("String are same:\n");
   }
   else
   {
    printf("Strings are not same:\n");
   }
}