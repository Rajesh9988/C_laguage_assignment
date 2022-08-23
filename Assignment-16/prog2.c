#include<stdio.h>


int main()
{
 int i,j,k;
 int a[3][3]={3,4,5,7,7,8,3,1,5}, b[3][3]={4,6,8,9,1,2,7,2,4}, mul[3][3];

 printf("Enter elements of first matrix:\n");
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   printf(" %3d",a[i][j]);
  }
  printf("\n");
 }
 printf("Second matix:-\n");
 for ( i = 0; i <3; i++)
 {
    for ( j = 0; j < 3; j++)
    {
        printf(" %3d",b[i][j]);
    }
    printf("\n");
    
 }
 
 
 
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   mul[i][j] = 0;
   for(k=0;k< 3;k++)
   {
    mul[i][j] = mul[i][j] + a[i][k]*b[j][k];
   }
  }
 }
 
 printf("Multiplied matrix is:\n");
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   printf("%3d", mul[i][j]);
  }
  printf("\n");
 }
 return 0;
}
