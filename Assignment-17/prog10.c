#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, leanth;
    printf("Enter a string:-\n");
    gets(str);
    leanth = strlen(str);
    char fr[leanth];
    int visited = -1;
    for (i = 0; i <=leanth; i++)
    {
        int count = 1;
        for (j = i + 1; j <=leanth; j++)
        {
            if (str[j] == str[i])
            {
                count++;
                fr[j] = visited;
            }
        }
        if (fr[i] != visited)
        {
            fr[i] = count;
        }
    }
    printf("---------------------\n");
    printf(" Element | Frequency\n");
    printf("---------------------\n");
    for (int i = 0; i<=leanth; i++)
    {
        if (fr[i] != visited)
        {
            printf("    %c", str[i]);
            printf("    |  ");
            printf("    %d\n", fr[i]);
        }
    }
    printf("---------------------\n");
    return 0;
}