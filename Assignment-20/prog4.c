#include<stdio.h>
#include<conio.h>

int main()
{
    int x =10;
    int *p,**q,***r;
    p = &x;
    q = &p;
    r = &q;

    printf("%d %d %d %d\n",x,*p,**q,***r);
    printf("%d %d %d %d \n",&x,p,*q,**r);
    printf("%d %d %d\n", &x,q,*r);
    printf("%d %d\n",&q,r);
    printf("%d",&r);
}