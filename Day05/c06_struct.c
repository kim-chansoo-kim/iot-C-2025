/*
	struct(����ü) - ����� ���� �ڷ���
	���� �ڷ����� ��� ���� ���� �ڷ���(Ÿ�� == ũ��)
*/
#include <stdio.h>


struct Human {						// ����ü ���� - struct ����ü��(Human)
	char name[100];					// ������� name, age
	int age;
};

int main()
{	/* '.' ��� ���� ������ */
	struct Human h;					// Human����ü�� ���� h ����
	strcpy(h.name, "������");
	h.age = 26;						// h��ü�� ��� age�� 30�� �����Ѵ�.

	printf("�� �̸��� %s�̰� ���̴� %d���Դϴ�.\n", h.name, h.age);

	return 0;
}