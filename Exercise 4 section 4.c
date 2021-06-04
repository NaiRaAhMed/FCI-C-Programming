//  Problem statement: Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter it belongs
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=0.0 , y=0.0 ;
printf("Enter the value of x : %f \n");
scanf("%f", &x);

printf("Enter the value of y : %f \n");
scanf("%f", &y);

if (x>0 && y>0)
puts("Q1");
else if (x<0 && y>0)
puts("Q2");
else if (x<0 && y<0)
puts("Q3");
else if (x>0 && y<0)
puts("Q4");
else if (x==0 && y==0)
puts ("origin");
else if (y==0)
puts("x-axis");
else if (x==0)
puts ("y-axis");
    return 0;
}
