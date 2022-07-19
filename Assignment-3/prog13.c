#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d",&num);

    if (num%3&&num%2)
    {
        
            printf("The number is divisble by 3 & 2");
        
    }
    else
        printf("The number in not divisble by 3 & 2");
    
}