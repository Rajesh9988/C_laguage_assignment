#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3]={3,4,6,5,8,3,2,7,8};
    int i,j;
    printf("Given matrix:\n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           printf("%3d",a[i][j]);   
        }
        printf("\n");    
    }
    printf("Lower trangle matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i>=j)
            {
                printf(" %3d",a[i][j]);
            }
            
        }
        printf("\n");
    }
     
    
}