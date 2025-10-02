#include <stdio.h>

void main() {
	int n, i;
	int sum = 0;

	printf("input a number:");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) sum = sum + i;
	printf("The result is %d", sum);
}
