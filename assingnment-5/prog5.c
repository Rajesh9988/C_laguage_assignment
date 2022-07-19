#include<stdio.h>

 int main()
 {
    int i,n=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("N odd number in reverse mode\n");

    
        if(i%2==0)
        {
            for ( i = n; i >=1; i--)
        {
            i -=1;
            printf("%d\n",i);
        } 
    }
    
 }