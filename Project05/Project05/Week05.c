#include <stdio.h>

void main() {
	int myNum;
	printf("���� �ϳ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &myNum);

	if (myNum > 0) printf("����Դϴ�.");
	else if (myNum < 0) printf("�����Դϴ�.");
	else printf("0 �Դϴ�.");
}
