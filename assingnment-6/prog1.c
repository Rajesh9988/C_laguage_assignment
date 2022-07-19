#include<stdio.h>

int main()
{

    int n,i ,sum;
    printf("Enter a number\n");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
       sum = sum+i;
    }
    printf("Sum is :- %d",sum);
}