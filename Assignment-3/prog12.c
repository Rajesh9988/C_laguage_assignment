#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character:-\n");
    scanf("%c",&c);
    if (('a'<=c)&&('z'>=c))
    {
        printf("Lowercase");
    }
    else 
    {
        printf("Uppercase");
    }
    
    
}