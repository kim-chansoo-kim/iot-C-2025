/* ���ڿ� �Է� */
#include <stdio.h>

int main()
{
	char str[20];
	printf("���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", str, sizeof(str));		  // str�� ������20��ŭ�� �Է��� �ޱ�

	printf("�Է��� ���ڿ�: %s\n", str);

	//printf("char ũ��: %d\n", sizeof(char));		//char ũ��: 1
	//printf("���� ũ��: %d\n", sizeof(int));			//���� ũ��: 4
	//printf("float ũ��: %d\n", sizeof(float));		//float ũ��: 4
	//printf("double ũ��: %d\n", sizeof(double));    //double ũ��: 8

	
	
	
	
	return 0;
}