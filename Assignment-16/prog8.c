#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3]={3,4,6,7,8,9,2,3,6};
    int i,j;
    printf("Given matrix:\n");
    for ( i = 0; i <3; i++)
    {
        for ( j= 0; j <3; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    printf("Upper trangle matrix:\n");
    for ( i = 0; i <3; i++)
    {
        for ( j= 0; j <3; j++)
        {
            if (i>j)
            {
                printf("   ");
            }
            else
                printf("%3d",a[i][j]);
            
        }
        printf("\n");
    }
    
}