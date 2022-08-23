#include <stdio.h>
#include <string.h>
void lower(char *b)
{
    int i;
    for (i = 0; i < 20; i++)
    {
        if (b[i] >= 65 && b[i <= 90])
        {
            b[i] += 32;
        }
    }
}
int main()
{
    char str[20];
    printf("Enter a string:-\n");
    gets(str);
    lower(str);
    printf(" %s", str);
}