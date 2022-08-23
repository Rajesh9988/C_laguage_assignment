#include<stdio.h>
#include<conio.h>
int uccrence(int[]);
int main()
{
   int a[5],i,x;
   printf(" Enter array:-");
   for ( i = 0; i < 5; i++)
   {
    scanf(" %d",&a[i]);
   }
   x = occrence(a);
   printf("occerence number is:- %d",x);
   
}
int occrence(int b[])
{
   int i;
   for ( i = 0; i <5; i++)
   {
      if (b[i]==b[i+1])
      {
          return b[i];
      }
      
   }
   
}