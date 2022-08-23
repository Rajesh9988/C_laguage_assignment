#include<stdio.h>
#include<conio.h>

int main()
{

    int a[3][3]={3,4,2,6,1,2,9,8,8};
    int i,j,sum=0,m=3;
    for ( i = 0; i < 3; i++)
    {
        m = m-1;
        for ( j = 0; j < 3; j++)
        {
            if (j==m)
            {
                sum = sum+a[i][j];
            }
            
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        
        for ( j = 0; j < 3; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of left daignols:- %d",sum);
    
}