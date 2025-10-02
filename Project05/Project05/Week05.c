#include <stdio.h>

void main() {
	int guess;
	int answer = 59;
	int trial = 1;

	printf("Guess a number :");
	scanf_s("%d", &guess);

	while (guess != answer) {
		if (guess < answer) printf("low!\n");
		else if (guess > answer) printf("high!\n");
		trial = trial + 1;
		printf("Guess a number :");
		scanf_s("%d", &guess);
	}

	printf("Congratulation! trials:%d", trial);

}
