#include<stdio.h>
#include<conio.h>

int main()
{
    int arry[10];
    int i,sum=0;
    int *ptr;
    ptr = arry;

    printf("enter array:-\n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&arry[i]);
    }
    for ( i = 0; i <10; i++)
    {
         sum+=*ptr;
         *ptr++;
    }
        printf(" %d",sum);
    
    
}