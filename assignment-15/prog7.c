#include<stdio.h>
#include<conio.h>

int duplicate(int[]);
int main()
{
    int x,a[10]={11,21,14,2,12,60,60,12,1,11},i;
    duplicate(a);
}  
int duplicate(int b[])
{
    int i,j,count;
    for ( i = 0; i <9; i++)
    {
        for ( j = i+1; j<10; j++)
        {
            if (b[i]==b[j])
            {
              count++;
            }          
        }
        
    }
    printf("duplicate is:- %d",count);   
    
}  

    
