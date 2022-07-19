#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y;
    // Getting data from user 
     printf("Enter X and Y :-\n");
     scanf("%d%d",&x,&y);
    //  swaping values
     x = x+y;
     y = x-y;
     x = x-y;
    //  print the result
    printf("Result :- X = %d Y = %d",x,y);
}