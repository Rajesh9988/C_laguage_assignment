#include<stdio.h>
#include<conio.h>

int merge();
int main()
{
    merge();
}
int merge()
{
    int a[5]={1,4,2,6,7},b[5]={3,5,8,9,0},c[10];
    int i=0,j=0,k=0;
    for ( k = 0;k < 10; k++)
    {
        if(i>=5)
        {
            while (k<10)
            {
                c[k] = b[j];
                j++;
                k++;
                if (k==10)
                {
                    break;
                }
                
            }
            
        }
        else if (a[i]<b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] =b[j];
            j++;
        }
    }
    for ( k= 0; k < 10; k++)
    {
        printf(" %d",c[k]);
    }
    
    
}