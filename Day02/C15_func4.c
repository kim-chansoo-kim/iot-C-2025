/*	
	�Լ� ����
	�Լ� ����, �Լ� ȣ��, �Լ� ����
*/
#include <stdio.h>

int func(int, int); // �Լ�����, �Լ����� - �ؿ� ����� ���� �Լ��� ������ �˷������ 
// �����̸��� �ᵵ �ǰ� Ÿ�Ը� �����
int main()
{
	int result = func(10, 20);
	printf("ȣ�� �� ���ϵ� ��: %d\n", result);

	return 0;
}

int func(int a, int b) {
	int res = a + b;
	return res;
}
