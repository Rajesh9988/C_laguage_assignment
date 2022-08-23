#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][3] = {3, 5, 7, 3, 1, 8, 9, 3, 1};
    int rsum[2], csum[2];
    int i, j, sum = 0;
    // claculate the sum of rows
    for (i = 0; i < 3; i++)
    {
        rsum[i] = 0;
        for (j = 0; j < 3; j++)
        {
            rsum[i] = rsum[i] + a[i][j];
        }
    }
    // calculate the sum of columns
    for (i = 0; i < 3; i++)
    {
        csum[i] = 0;
        for (j = 0; j < 3; j++)
        {
            csum[i] = csum[i] + a[j][i];
        }
    }
    printf("Sum of rows :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %3d", a[i][j]);
        }
        printf("   -> %d",rsum[i]);
        printf("\n");
}
    printf("Sum of colunms:\n");
  for ( i = 0; i < 3; i++)
  {
    printf("  %d",csum[i]);
  }
  
}
