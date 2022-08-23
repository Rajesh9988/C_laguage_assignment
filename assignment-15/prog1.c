#include<stdio.h>
#include<conio.h>
int greatestnumber(int[]);
int main()
{
    int x,a[5]={2,5,6,9,3};
    // x = a[5];
  x =  greatestnumber(a);
  printf(" %d",x);
}

int greatestnumber(int b[])
{
   int i,j,max =-999999;
   for ( i = 0; i < 5; i++)
   {
        if (max<b[i])
        {
            max = b[i];
            // return max;
        }
   }
   return max;
//    printf(" %d",max);   
}