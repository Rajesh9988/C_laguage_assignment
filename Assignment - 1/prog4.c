//  WAP to find the area of the circle 

#include<stdio.h>

int main()
{
    // variable---->>>>>>>
    float  r , area,perameter;
    // geting data-------->>>>>>
    printf("Enter the radius of circle\n");
    scanf("%f",&r);
    // calculate the area of circle----->>>>>
    area = 3.14*r*r;
    perameter = 2*3.14*r;
    // print the data area of circle----->>>>
    printf("the area of circle %f\n",area);
    printf("the perametre of %f\n",perameter);
}