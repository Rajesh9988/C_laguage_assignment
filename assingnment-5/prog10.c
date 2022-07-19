#include<stdio.h>

int main()
{
    int i,n,tab;
    printf("Enter a number\n");
    scanf("%d",&n);
    for ( i = 0; i <=10; i++)
    {
        tab = n*i;
        printf("%d x %d = %d\n",n,i,tab);
    }
    
}