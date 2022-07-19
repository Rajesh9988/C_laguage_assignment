#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
   printf("N odd numbers\n");
    for ( i = 0; i <=n; i++)
    {
        if (i%2==0)
        {
            i = i+1;
            printf("%d\n",i);
        }
        
    }
    
}