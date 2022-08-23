#include<stdio.h>
#include<string.h>

int main()
{

    char ip[20];
    int i,j;
    printf("Enter the IP Adress:\n");
    gets(ip);
    char *a = strtok(ip,".");
    while (a!=NULL)
    {
        int x = atoi(a);
        if ((x>=0)&&(x<=255))
        {
            printf(" %d",x);
        }
        a = strtok(NULL,".");
        
    }
    
}