#include<stdio.h>
#include<conio.h>

int reverse(int[]);
int main()
{
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
     reverse(a);
}
int reverse(int b[])
{
    int i;
    for ( i = 9; i>=0; i--)
    {
        printf(" %d",b[i]);
    }
    
}