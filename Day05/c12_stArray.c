/*
	����ü �迭
*/
#include <stdio.h>

// ������� ����
typedef struct addr
{
	char name[20];
	int age;
	char tel[20];
	char addr[100];
}Addr;

// 

int main()
{
	Addr list[3] =
	{
		{"������", 26, "010-1464-7873", "����"}
		, {"��ö��", 33, "010-2222-2222", "�λ�"}
		, {"�迵��", 24, "010-3333-3333", "���"}
	};

	for (int i = 0; i < 3; i++)
	{
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr); // 0���濡 ����ִ� ���������� ���
	}

	return 0;
}