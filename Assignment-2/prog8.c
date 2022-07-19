#include<stdio.h>
#include<conio.h>

int main()
{

    int n;
    printf("Enter a integer\n");
    scanf("%d",&n);

    if(n&1==1)
    {
        printf("ODD\n");
    }
    else
    {
        printf("EVEN");
    }
    return 0;
}