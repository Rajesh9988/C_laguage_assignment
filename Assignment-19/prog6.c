#include <stdio.h>
#include <string.h>

int main()
{
    char str[2][20];
    int i,j, flag, len;
    printf("Enter a string:-\n");
    for (i = 0; i < 2; i++)
    {
        gets(str[i]);
    }
    printf("Plindrome strign:-\n");
    for (i = 0; i <2; i++)
    {
        len = strlen(str[i]);
        if (str[i] != str[len-i-1])
        {
            flag = 1;
            break;
        }
    if (flag)
    {
        printf("Not plindrome string in this list:\n");
    }
    else
    {
        printf("%s\n", str[i]);
    }
}
}