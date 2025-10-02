#include <stdio.h>

void main() {
	int myNum;
	printf("정수 하나를 입력하시오 : ");
	scanf_s("%d", &myNum);

	if (myNum > 0) printf("양수입니다.");
	else if (myNum < 0) printf("음수입니다.");
	else printf("0 입니다.");
}
