#include<stdio.h>
#include<conio.h>

int smallestnumber(int[]);
int main()
{
    int x,a[6]={2,6,9,7,3,1};
     x = smallestnumber(a);
     printf("Smallest number is:- %d",x);
}
int smallestnumber(int b[])
{
    int i,min;
    for ( i = 0; i < 6; i++)
    {
       if (min>b[i])
       {
        min = b[i];
       }
          
    }
    return min;    
}