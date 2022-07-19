#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("THE GIVEN NUMBER IS POSITIVE\n");
    }
    else
    {
        printf("THE GIVEN NUMBER IS NON-POSITIVE\n");
    }
}