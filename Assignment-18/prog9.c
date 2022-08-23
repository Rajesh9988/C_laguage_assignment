#include <stdio.h>
#include <string.h>

int swap(char a[], int i, int j)
{
    int temp = 0;
    while (i <= j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
        i++;
    }
}
int main()
{
    char a[100];
    int i = 0, j, len, end = 0, start = 0, flag = 0;
    printf("Enter a string:\n");
    gets(a);

    while (a[i] != '\0')
    {
        while (a[i] != ' ')
        {
            if (a[i] == '\0')
            {
                flag = 1;
                break;
            }
            end++;
            i++;
        }
        swap(a, start, end - 1);
        if (flag == 1)
        {
            break;
        }
        start = end++;
        i++;
    }
    swap(a, 0, i - 1);
    printf("%s", a);
    return 0;
}