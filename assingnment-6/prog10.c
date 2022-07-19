#include<stdio.h>

int main()
{
    int n,rev=0,rem;
    printf("Enter a number\n");
    scanf("%d",&n);
    while (n!=0)
    {
    rev = rev*10;
    rev = rev+n%10;
       n = n/=10;
    }
    printf("%d",rev);
    return 0;
}