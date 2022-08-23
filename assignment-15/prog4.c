#include<stdio.h>
#include<conio.h>

int rotateposition(int[]);
int main()
{
    int a[5]={3,2,5,1,9};
     rotateposition(a);
}
int rotateposition(int b[])
{
    int temp,i,j;
    int d =2;

    for ( j = 0; j<2; j++)
    {
        temp = b[4];
    for ( i = 4; i >0; i--)
        {
            b[i] = b[i-1];
            // b[15-1] = temp;
        }
        b[0]=temp;
        d--;
    }
    // return temp; 
    for ( i = 0; i<=4; i++)
    {
        printf(" %d",b[i]);
    }
      
}