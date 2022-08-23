#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char city[10][20],t[20];
    int i,j;
    printf("Enter a 10 city:-\n");
    for ( i = 0; i <2; i++)
    {
        gets(city[i]);
    }
    for ( i = 0; i <2; i++)
    {
        for ( j = i+1; j <3; j++)
        {
            if (strcmp(city[i],city[j]>0))
            {
                strcpy(t,city[i]);
                strcpy(city[i],city[j]);
                strcpy(city[j],t);
               
            }
            
        }
    }
}