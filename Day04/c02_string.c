/* 
	���ڿ� == �ּ�
*/
#include <stdio.h>

int main()
{
	char str[100] = "orange";

	printf("%s\n", str);
	printf("%s\n", "orange");
	printf("%p\n", "orange");
	printf("%c\n", *"orange"); // ��������
	printf("%c\n", *("orange" + 1)); // 2��° �ּ��� r ���
	printf("%c\n", "orange"[2]); // �迭 ����

	//"orange"[0] = '0';
	*"orange" = 'O';
	printf("%s\n", str);

	return 0;
}

/*
	data
	- ��: ����ڿ��� �Ҵ�� �޸� ����
	- stack: ��������, �Ű�����
	- Data: ��������, static
	- Rod: ���ڿ� ���, ���ͷ�
*/