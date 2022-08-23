#include<stdio.h>
#include<conio.h>

int swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int p = 20;
    int q = 10;
    printf("Enter two number:\n");
    scanf("%d %d",&p,&q);
    swap( &p,&q);
    printf("After swaping variable:\n");
    printf("%d %d",p,q);
}