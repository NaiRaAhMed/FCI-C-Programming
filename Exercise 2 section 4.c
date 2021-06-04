// An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x,  where x > 0, of the coordinate line. In one step the elephant can move 1, 2, 3, 4 𝑜𝑟 5 positions forward. Determine, what is the minimum number of steps he needs to make in order to get to his friend's house.
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
printf("enter the location of the friend : ");
scanf("%d", &x);
int steps =(x+4) /5;
printf("the minium nimber of steps is %d\n ", steps);

    return 0;
}
