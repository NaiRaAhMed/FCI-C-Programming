// (Diamond-Printing Program) Write a program that prints the following diamond shape. You may use 𝑝𝑟𝑖𝑛𝑡𝑓 statements that print either a single asterisk (*) or a single blank. Maximize your use of iteration (with nested for statements) and minimize the number of 𝑝𝑟𝑖𝑛𝑡𝑓 statements.

#include<stdio.h>
#include<stdlib.h>

int main(void) {

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5 - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int j = 7; j >= 2*i-1; j--) {
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
