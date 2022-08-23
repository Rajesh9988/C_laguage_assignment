#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char list[4][2][30] = {{"rajesh","42541"},{"prabhjot","39642"}, {"tushar","4485"}};  
    char username[]="rajesh";
    char password[] ="44541";
    int i,flag=0;
    for ( i = 0; i <3; i++)
    {
        if ((strcmp(username,list[i][0])==0) && (strcmp(password,list[i][1])==0))
        {
            printf("Login successfully....\n");
            flag =1;
        }
       
    }
    if (flag==0)
    {
          printf("incorrect password and username....\n"); 
    }
    
    

}