/*
	puts, fputs - ���� ��� �Լ�
*/
#include <stdio.h>

int main()
{
	char str[100] = "Delmonte orange";
	char* ps = "banana";


	printf("%s\n", str);
	puts(str);					// �ڵ� ����
	fputs(str, stdout);			// �ڵ� ���� �ȵ�
								// fputs(���ڿ�, ���_��Ʈ��);
								/*ù ��° �Ű�����(str): ����� ���ڿ�
								  �� ��° �Ű�����(stdout): ����� ��� (ǥ�� ��� = ȭ��)*/
	puts(ps);
	fputs(ps, stdout);

	return 0;
}