#include <stdio.h>

typedef int int32mt;

struct human
{
	char name[100];
	int32mt age;
};

typedef struct myst
{
	int a;
	int b;
}Myst;

int main()
{
	struct human h = { "������", 26 },
				h2 = { "�̼���", 46 },
				h3 = { "��ȣ��", 49 };

	printf("�� �̸��� %s�̰� %d���Դϴ�.\n", h.name, h.age);
	printf("�� �̸��� %s�̰� %d���Դϴ�.\n", h2.name, h2.age);
	printf("�� �̸��� %s�̰� %d���Դϴ�.\n", h3.name, h3.age);

	Myst m;
	m.a = 10;
	m.b = 20;
	printf("a: %d\nb: %d\n", m.a, m.b);


	return 0;
}