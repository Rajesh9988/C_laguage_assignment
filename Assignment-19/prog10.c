#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char email[2][20];
    int password[8]={0};
    int i,j,len,flag=0;
    fflush(stdin);
    printf("Enter email:-\n");
    gets(email);
    printf("Enter password:-\n");
    scanf("%d",&password);

    for ( i = 0; i <2; i++)
    {
        if (strchr(email[i],'@')!=0)
        {
            printf("%s\n",email[i]);
            printf("%d\n",password);
            flag =1;
        }
    }
    if (flag==0)
    {
        printf("Please enter valid email adress...\n");
    }

}