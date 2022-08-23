#include<stdio.h>
#include<conio.h>

int sort(int[]);
int main()
{
    int a[7]={3,4,13,1,8,4,2};
    
         sort(a);
}
int sort(int b[])
{
    int i,j,temp;
    for ( i = 0; i < 6; i++)
    {
        for ( j = i+1; j < 7; j++)
        {
            if (b[i]>b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
                // return temp;
            }
            
        }
       
    }
    for ( i = 0; i < 7; i++)
    {
        printf(" %d",b[i]);
    }
    
    // return temp;
    
}