// Write a program to print a given number without its last digit.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a , b;
    // geting number from user
    printf("Enter a number\n");
    scanf("%d",&a);
    // proccess 
     b = a/10;
     // print the result
     printf("result =  %d",b);
}