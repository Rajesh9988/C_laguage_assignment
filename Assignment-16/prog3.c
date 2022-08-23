#include<stdio.h>
#include<conio.h>

int  main()
{
    int a[2][2] ={3,5,6,2};
    int b[2][2];
    int i,j;

    // print matrix
    for ( i = 0; i <2; i++)
    {
        for (j = 0; j <2; j++)
        {
            printf("%2d",a[i][j]);
        }
        printf("\n");
    }
    //  converting into transpose matrix
    for ( i = 0; i <2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            
        b[j][i] = a[i][j];
        }
        
    }
    printf("After converting transpose matrix:-\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%2d",b[i][j]);
        }
        printf("\n");
    }
    
    
    
}