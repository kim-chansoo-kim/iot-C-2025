/*
	�Լ� ������ - �Լ��� �̸�
*/
#include <stdio.h>

/*int sum(int a, int b)
{
	int res = a + b;
	return res;
}

int sub(int a, int b)
{
	int res2 = a - b;
	return res2;
}
*/
int add(int x, int y)
{ 
	return x + y; 
}
int subtract(int x, int y) 
{ 
	return x - y; 
}
int multiply(int x, int y)
{ 
	return x * y; 
}
int divide(int x, int y)
{ 
	return (y != 0) ? (x / y) : 0;
}

//int sum(int, int);
//int sub(int, int);
void func(int(*fp)(int, int))
{
	int a, b;
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &a, &b);

	printf("���: %d\n", fp(a, b));
}

int main() 
{
	/*int (*fp)(int, int);
	int res;
	int res2;
	res = sum(20, 10);
	res2 = sub(20, 10);
	fp = sum;
	res = fp(20, 10);
	printf("res: %d\n", res);
	printf("res2: %d\n", res2);*/
	int pong;

	while (1) {
		printf("\n� ������ �����Ͻðڽ��ϱ�?\n");
		printf("1. ���ϱ�\n2. ����\n3. ���ϱ�\n4. ������\n5. ����\n");
		printf("����: ");
		scanf_s("%d", &pong);

		if (pong == 5) {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}

		switch (pong) {
		case 1: func(add); break;
		case 2: func(subtract); break;
		case 3: func(multiply); break;
		case 4: func(divide); break;
		default: printf("�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���.\n");
		}
	}
	return 0;
}