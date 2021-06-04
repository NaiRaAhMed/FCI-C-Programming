// Write program that reads an input 𝑥. If 𝑥 is even output “EVEN” otherwise output “ODD”.
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x ;
   printf ("Enter x : \n") ;
   scanf ( "%d" , &x) ;
   if (x%2 == 0)
   {
       printf ("EVEN") ;
   }
   else if (x%2 != 0)
   {
        printf ("ODD");
   }
    return 0;
}
