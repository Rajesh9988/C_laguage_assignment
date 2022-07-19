#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character\n");
    scanf("%c", &a);

    if ('a' <= a && 'z' >= a)
    {
        printf("Lowercase\n");
    }
    else if ('A' <= a && 'Z' >= a)
    {
        printf("Uppercase\n");
    }
     if (a <= 'i'&& a<='I')
    {
        printf("The character is digits\n");
    }
    
    else
        printf("Speacial character\n");
}