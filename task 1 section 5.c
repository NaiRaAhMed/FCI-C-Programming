// (Final Velocity) Write a program than asks the user to enter the initial velocity and acceleration of an object, and the time that has elapsed, places them in the variables u, a, and t, and prints the final velocity, v, and distance traversed, s, using the following equations.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float u , a , t , v , s ;
    printf ("Enter u :") ;
    scanf ("%f" , &u ) ;
    printf ("Enter a :") ;
    scanf ("%f" , &a ) ;
    printf ("Enter t :") ;
    scanf ("%f" , &t ) ;
    v = ((u) + (a*t)) ;
    printf ("the final velocity : %f \n" , v) ;
    s = ((u*t) + (0.5 * a *t *a * t)) ;
    printf ("the distance traversed : %f\n" , s) ;

    return 0;
}
