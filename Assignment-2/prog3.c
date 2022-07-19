#include<stdio.h>
#include<conio.h>

int main()
{
    // variables
    int a, b;
    // Getting data from user 
    printf("Enter A and B\n");
    scanf("%d%d",&a,&b);
    //swaping variables value
   a = a+b;
   b = a-b;
   a = a-b;
   //print the result
   printf("Result = A = %d B = %d",a,b);
}