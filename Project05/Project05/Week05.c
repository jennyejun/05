#include <stdio.h>

void main() {
	int myNum;
	printf("���� �ϳ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &myNum);

	if (myNum >= 0) printf("���밪�� %d �Դϴ�.", myNum);
	else printf("���밪�� %d �Դϴ�.", -myNum);
}
