/* 
	��Ʈ��Ʈ �迭 ����
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

void print_list(Addr* plist, int size);	// ����ü ����Ʈ�� ����ϴ� �Լ�

int main()
{
	Addr list[5] =
	{
		  {"�̼���", 26, "010-1111-1111", "����"}
		, {"��ö��", 29, "010-2222-2222", "�λ�"}
		, {"�ڿ���", 24, "010-3333-3333", "���"}
		, {"������", 22, "010-4444-4444", "����"}
		, {"����ȣ", 25, "010-5555-5555", "����"}
	};

	print_list(list, 5);

	return 0;
}

void print_list(Addr* plist, int size) // �Լ����� ������ ������ �迭�� �޾Ƶ� ������ �����ͺ����� �޴°� ����
{
	printf("-----�ּҷ� ���-----\n");
	for (int i = 0; i < size; i++)
	{
		printf("�̸�    : %s\n", plist[i].name);
		printf("����    : %d\n", plist[i].age);
		printf("��ȭ��ȣ: %s\n", plist[i].tel);
		printf("�ּ�    : %s\n", plist[i].addr);
		printf("\n");
	}
}