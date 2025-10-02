#include <stdio.h>

void main() {
	int a = 0, b = 0, c;
	char calc;

	printf("input the calculation : ");
	scanf_s("%d %c %d", &a, &calc, 1, &b);

	if (calc == '+') c = a + b;
	else if (calc == '-') c = a - b;
	else if (calc == '*') c = a * b;
	else c = a / b;

	printf("= %d", c);
}
