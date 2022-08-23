#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{

    char str[10][250];
    int i, j, vowel=0;
   
    printf("Enter a string:\n");
    for (i = 0; i < 5; i++)
    {
        fgets(str,250,stdin);
    }
    printf("\n\n");
    for (i = 0; i <5; i++)
    {
        for (j = 0; str[i][j] != '\0'; j++)
        {
            if (str[i][j] == 'a' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'e' || str[i][j] == 'u')
            {
                vowel++;
            }
        }
        printf("%s => %d\n", str[i], vowel);
        vowel = 0;
       
    }
    return 0;
}