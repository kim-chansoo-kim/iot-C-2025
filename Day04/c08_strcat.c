/*
	strcat - ���ڿ��� ������ �Լ�
*/
#include <stdio.h>
// #include <string.h>

int main()
{
	char str[100] = "apple";

	strcat(str, "banana");
	printf("��°�: %s\n", str);	// ��°�: applebanana

	strncat(str, "orange", 3);
	printf("��°�: %s\n", str);	// ��°�: applebanana'ora' 3���� ����
	return 0;
}