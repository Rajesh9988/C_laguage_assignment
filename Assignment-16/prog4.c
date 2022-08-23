#include<stdio.h>
#include<conio.h>

int main()
{

    int a[3][3]={2,4,5,7,3,2,7,8,4};
    int sum =0,i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i==j)
            {
                sum = sum + a[i][j];
            }
            
        }
        
    }
    for ( i = 0; i <3; i++)
    {
        for ( j = 0;j <3; j++)
        {
            printf(" %3d",a[i][j]);
        }
        printf("\n");
    }
    printf(" Sum of right daigonls:- %d",sum);
    
    
}