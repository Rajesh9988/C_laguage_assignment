#include <stdio.h>
#include <string.h>

int main()
{
    char str[4][20] = {"My", "name", "is", "rajesh"};
    char world1[] = "MY";
    char world2[] = "is";
    int i, w1 = -1, w2 = -1, min=10000;
    for (i = 0; i<4; i++)
    {
        if (strcmp(str[i], world1) == 0)
            w1 = i;
        if (strcmp(str[i], world2) == 0)
            w2 = i;

        min = w2 - w1;
      
    }
    printf("Minimum diffrence between two number is %d", min-1);
}