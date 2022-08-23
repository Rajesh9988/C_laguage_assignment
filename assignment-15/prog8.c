#include<stdio.h>
#include<conio.h>
 int unique(int[]);
int main() {

 int array[100];
 unique(array);
}
  int unique(int b[])
  {
    int size,i,j;
 printf("Enter number of elements in array\n");
 scanf("%d", &size);
 printf("Enter %d numbers\n", size);
  
 for(i = 0; i < size; i++){
  scanf("%d", &b[i]);
 }
  
 printf("Unique Elements\n");
 for(i = 0; i < size; i++) {
  for (j=0; j<i; j++){
      if (b[i] == b[j])
       break;
       }
      
     if (i == j){
      printf("%d ", b[i]);
  }
 }
  
 getch();
 return 0;
}