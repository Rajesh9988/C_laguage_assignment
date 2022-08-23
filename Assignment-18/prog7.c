#include<stdio.h>
#include<string.h>

int palindrome(char a[],int leanth)
{
   int i;
   int flag;
   for ( i = 0; i < leanth; i++)
   {
      if (a[i] != a[leanth-i-1])
      {
        flag =1;
        break;
      }
   }
   if (flag)
   {
    printf("%s is  not palindrome",a);
   }
   else
    printf(" %s is palindrome",a);
   
}
int main()
{
    char str[20];
    int len;
    printf("Enter a string:-\n");
    gets(str);
    len = strlen(str);
    palindrome(str,len);
}