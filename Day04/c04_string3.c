/*
	scanf, gets(������� �Է°���)
	stdin
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[100];

	/* scanf */
	/*printf("���ڿ� �Է�>> ");
	scanf("%s", str);

	printf("���ڿ�: %s\t", str);
	scanf("%s", str);
	printf("���� ���ڿ�: %s\n", str);*/

	/* gets */
	/*printf("������ ������ �Է� >> ");
	gets(str);
	printf("�Է� ���ڿ�: %s\n", str);*/

	/*fgets*/
	printf("������ ������ �Է� >> ");
	fgets(str, sizeof(str), stdin);
	printf("�Է� ���ڿ�: %s\n", str);

	return 0;
}