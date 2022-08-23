#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3]={4,0,6,0,0,2,4,0};
    int i,j,count=0;
    printf("Given matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        for (  j= 0; j <3; j++)
        {
            printf("%3d",a[i][j]);
        if (a[i][j]==0)
        {
            ++count;
        } 
        } 
        printf("\n");
    }
    if (count>3*3/2)
    {
        printf(" This is sparse matrix:\n");
    }
    else
        printf("This is not sparse matix:\n");
    
    printf("%d zero in the matrix\n" ,count);
    
}