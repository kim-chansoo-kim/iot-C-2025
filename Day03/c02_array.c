#include <stdio.h>

int main()
{
	int ary[] = {1, 2, 3, 4, 5};


	printf("�迭�� ��üũ�� %d\n", sizeof(ary));
	printf("�迭 ���Ѱ��� ũ�� %d\n", sizeof(ary[0]));
	printf("�迭 ���� ����: %d\n", sizeof(ary) / sizeof(ary[0]));
	printf("�迭 �̸�: %p\n", ary);
	printf("�迭�� ù ��°�� �ּ�: %p\n", &ary[0]);
	printf("�迭�� �� ��°�� �ּ�: %p\n", ary + 1);
	printf("�迭�� �� ��°�� �ּ�: %p\n", &ary[1]);

	int score[5];
	int size = sizeof(score) / sizeof(score[0]);

	for (int i = 0; i < size; i++) {
		printf("������ �Է��ϼ��� ��°: ");
		scanf_s("%d", &score[i]);
	}
	for (int i = 0; i < size; i++) {
		printf("-%d-", score[i]);
	}

	return 0;
}