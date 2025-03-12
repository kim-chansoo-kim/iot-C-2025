/* ������Ʈ ������ */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 30;
	int res;

	res = (n > 10) && (n < 20);		// && -> AND (�� �� ���̾�� ��)
	printf("res: %d\n", res);

	res = (n < 10) || (n > 20);		// || -> OR (�� �� �ϳ��� ���̸� ��)
	printf("res: %d\n", res);

	res = !(n >= 30);				// ! -> NOT (���� ��������, ������ ������)
	printf("res: %d\n", res);

	res = ~n;						// ~ -> ��Ʈ ���� (��� ��Ʈ�� 0 <-> 1�� ������, ��������� -1�� �� ���� ���°� ��)
	printf("res: %d\n", res);
	
	res = n << 1;					// << -> ���� ����Ʈ ������(Left Shift)��, ��Ʈ�� �������� �̵���Ű�� ����
	printf("res: %x\n", res);


	res = res >> 1;					// << -> ������ ����Ʈ ������(Right Shift)��, ��Ʈ�� ���������� �̵���Ű�� ����
	printf("res: %x\n", res);

	int n2 = 143;					// 0b 1000 1111
	res = n2 << 1;					// 0b 1 0001 1110
	printf("res: %x\n", res);
	res = res >> 1;					// 0b 1100 0111
	printf("res: %x\n", res);

	return 0;
}