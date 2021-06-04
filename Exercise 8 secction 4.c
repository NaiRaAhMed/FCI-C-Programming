// To make people happy, sell candies!. The store bought a package of 𝑛    candies, for 𝑥 dollars each, and the store wants to know the total profit the store is going to earn after selling all 𝑛 candies for 𝑦 dollars each. Can you help the store to know?
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, x, y;

printf("Enter the number of candies: ");
scanf("%d", &n);

printf("Enter the price of bought: ");
scanf("%d", &x);

printf("Enter the price os sell : ");
scanf("%d", &y);

int profit;
profit = n * (y - x);

printf("The total profit is  %d\n", profit);

    return 0;
}
