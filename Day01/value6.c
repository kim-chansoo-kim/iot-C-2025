/* ��� */
#include <stdio.h>

int main()
{	
	int r = 10;
	const double pi = 3.14;				// pi��� ���� �̸� ��ü�� const�� ����� �����ϰ� 3.14�� �ʱ�ȭ
	double cf = 2 * pi * r;

	//pi = 3.15; ������ pi�� ����� �ٲ�
	printf("���ѷ�: %.2lf\n", cf);
	return 0;
}