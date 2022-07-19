// 1. Write a program to print unit digit of a given number

#include<stdio.h>
#include<conio.h>

int main()
{
    //variables
    int a,b;
    // getting number from user 
    printf("Enter a number\n");
    scanf("%d",&a);
    // proccess
    b  = a%10;
    // print the result
    printf("Result is :- %d",b);
}