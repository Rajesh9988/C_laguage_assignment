#include<stdio.h>
#include<conio.h>

void  sort(int *p ,int len)
{
    int i,j,temp;
    for ( i = 0; i < len-1; i++)
    {
        for ( j = i; j <len; j++)
        {
            if (p[i]>p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            
        }
        
    }
    
}
int main()
{
    int a[]={2,8,9,0,4,3,7,8,5,1};
    int i;
    sort(a,10);
    for ( i = 0; i < 10; i++)
    {
        printf(" %d",a[i]);
    }
    
}