#include <stdio.h>

int main()
{
	int age = 0;
	char str[20];

	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);
	
	printf("�̸��� �Է��ϼ���: ");
	scanf_s("%19s", str, (unsigned int)sizeof(str));

	printf("�Է��� ����: %d\n�Է��� �̸�: %s", age, str);
	return 0;
}