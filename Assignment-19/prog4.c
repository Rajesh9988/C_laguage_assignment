#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char str[3][50]={"rajesh","prabhjot","microsoft"};
    char a[20];
    int i,j;
        for ( i = 0; i < 5; i++)
        {
        if(strcmp(str[i],"rajesh")==0)
        {
            printf("String is find");
            break;
        }
        }
        
    return 0;
    
}