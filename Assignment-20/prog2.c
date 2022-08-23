#include<stdio.h>
#include<string.h>
void swap(char **a1,char **b2)
{
     char *temp;
     temp = *a1;
     *a1 = *b2;
     *b2 = temp;
}
int main()
{
    char *a[10],*b[10];
    fflush(stdin);
    printf("Enter two string:\n");
    gets(a);
    gets(b);
    printf("\n");
    swap(&a,&b);
    printf("Swaping two strigs;\n");
    printf("%s %s",a,b);
    return 0;
}