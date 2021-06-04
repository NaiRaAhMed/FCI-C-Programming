//Write a C program to evaluate the arithmetic expression: ((a + b / c ∗ d − e) ∗ (f − g)) Get input from user
#include<stdio.h>
int main ()

{
int a, b, c, d, e, f, g ;
printf(" enter a : \n");
scanf("%d", & a);
printf(" enter b : \n");
scanf("%d", & b);
printf(" enter c : \n");
scanf("%d", & c);
printf(" enter d : \n");
scanf("%d", & d);
printf(" enter e : \n");
scanf("%d", & e);
printf(" enter f : \n");
scanf("%d", & f);
printf(" enter g : \n");
scanf("%d", & g);
int result;
result = (a+b/c+d-e) *(f-g) ;
printf("the result of(a+b/c+d-e) *(f-g) is:%d\n ", result);

return 0 ;
}
