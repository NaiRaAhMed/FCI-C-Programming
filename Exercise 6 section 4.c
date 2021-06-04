//Write a program that calculates the are of a circle
#include <stdio.h>
#include <math.h>
#define PI 3.141592653

int main()
{
    float radius, area;

    printf("Enter the radius of a circle \n");
    scanf("%f", &radius);
    area = PI * radius * radius ;
    printf("Area of a circle is  %f\n", area);
    return 0 ;
}
