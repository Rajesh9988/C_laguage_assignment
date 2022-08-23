#include<stdio.h>
#include<string.h>

void upper(char *a)
{
   int i;
   for ( i = 0; i < a[i]; i++)
   {
     if (a[i]>=97&&a[i<=122])
     {
        a[i] -=32;
     }
     
   }
   
}
int main()
{
    char str[20];
    printf("Enter a string:-\n");
    gets(str);
    char up;
    upper(str);
   printf("%s",str);
}