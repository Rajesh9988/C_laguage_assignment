#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3]={3,4,1,3,5,6,7,1,1};
    int i,j,count=0,mx=0,ind=0;
    printf("Count columns which contains maximum 1:\n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%3d",a[i][j]);
            if (a[i][j]==1)
            {
                count = a[i][j]+count;
            }
        }
        if (count>mx)
        {
            mx = count;
            ind =i;
        }
             
        printf("\n");
    }
    printf("%d Rows which contain 1s:\n",ind);
    printf("%d  1s contain\n",mx);
    
}