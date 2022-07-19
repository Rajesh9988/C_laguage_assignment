#include<stdio.h>

int main()
{
    float pro, cost , sum , res; 
    printf("Enter pro & cost\n");
    scanf("%f %f",&pro,&cost);
     sum = pro-cost/cost*100;
     res = cost -pro/cost*100;
     if (sum>res)
     {
        printf("profit");
     }
     else
     {
        printf("loss");
     }
}