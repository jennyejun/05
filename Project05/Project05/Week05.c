#include <stdio.h>

void main() {
	int myNum;
	printf("정수 하나를 입력하시오 : ");
	scanf_s("%d", &myNum);

	if (myNum >= 0) printf("절대값은 %d 입니다.", myNum);
	else printf("절대값은 %d 입니다.", -myNum);
}
