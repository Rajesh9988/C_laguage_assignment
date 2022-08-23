#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10] = {111, 212, 23, 42, 23, 36, 74, 85, 93, 110};
    int i,j, size;
    int *ptr;
    ptr  = &arr[10-1];
    printf("Array in reverse order:\n");
    for (i = 0; i < 10; i++)
    {
        printf(" %d",*ptr--);
    } 
}