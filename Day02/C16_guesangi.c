#include <stdio.h>
// ���ϱ�
int sum(int a, int b)
{
	int res1 = a + b;
	return res1;
}
// ����
int sub(int a, int b)
{
	int res2 = a - b;
	return res2;
}
// ���ϱ�
int mul(int a, int b)
{
	int res3 = a * b;
	return res3;
}
// ������
int div(int a, int b)
{
	int res4 = a / b;
	return res4;
}
// �����Լ�
int main()
{
	int a, b;
	char y, q;
	printf("���� ���α׷��Դϴ�.\n");
	printf("��� ������ ������: +, -, *, /\n");

	while (1) {
		printf("�ΰ��� ������ �Է��ϼ���.\n");
		scanf_s("%d %d", &a, &b);

		printf("�����ڸ� �Է��ϼ���.\n");
		scanf_s(" %c", &y, 1);

		if (y == '+') {
			printf("���ϱ� ��: %d\n\n", sum(a, b));
		}
		else if (y == '-') {
			printf("���� ��: %d\n\n", sub(a, b));
		}
		else if (y == '*') {
			printf("���ϱ� ��: %d\n\n", mul(a, b));
		}
		else if (y == '/') {
			if (b != 0) {
				printf("������ ��: %d\n\n", div(a, b));
			}
			else {
				printf("0���δ� ������!!\n\n");
			}
		}
		else {
			printf("�Ұ����� �������Դϴ�.\n\n");
		}

		printf("�����Ϸ��� �ҹ���'q'�� �Է��ϼ���: \n");
		scanf_s("%c", &q);

		if (q == 'q') {
			break;
		}
	}
	return 0;
}