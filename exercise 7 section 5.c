// (Summation) Write a C program to compute the summation of the range [L, R] inclusive. Don’t use loops. Example, [1, 3] = 1+2+3=6. [4,8] = 4+5+6+7+8 = 30. The first number or range (L) and the last number of range (R), while ( 1=<𝐿 ,𝑅≤〖10〗^9  , 𝐿<=𝑅 )
#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
