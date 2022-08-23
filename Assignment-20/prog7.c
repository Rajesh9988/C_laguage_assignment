#include <stdio.h>
#include <string.h>

int main()
{
    char str[120];
    int j = 0, s=0;
    char *p;
    fflush(stdin);
    printf("Enter a string:\n");
    gets(str);
    p = str;

    while (*p != '\0')
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
        {
            j++;
        }
        else
        {
            s++;
        }
        p++;
    }
    printf("Number of vowel is : %d\n", j);
    printf("Number of constant is : %d", s);

    return 0;
}
