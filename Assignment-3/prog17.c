#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter A,B and C:-\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        printf("This is a traingle");
    }
    else
    {
        printf("This is not a traingle");
    }
}
