/*  */
#include <stdio.h>

int main()
{
	int n = 10;
	int n2 = 3;
	double res;

	res = n / 2;
	printf("res: %.1lf\n", res);

	res = (double)n / 3;			// ���º�ȯ: ������ �Ǽ� ���·�
	printf("res: %.1lf\n", res);

	res = n / 3.0;					// ���� ������ ������ ����
	printf("res: %.1lf\n", res);

	res = (double)n / 3.0;			// ���� ������ ������ ����
	printf("res: %.1lf\n", res);

	return 0;
}