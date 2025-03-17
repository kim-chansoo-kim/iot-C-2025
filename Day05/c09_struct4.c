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
	struct human h = { "김찬수", 26 },
				h2 = { "이수근", 46 },
				h3 = { "강호동", 49 };

	printf("제 이름은 %s이고 %d살입니다.\n", h.name, h.age);
	printf("제 이름은 %s이고 %d살입니다.\n", h2.name, h2.age);
	printf("제 이름은 %s이고 %d살입니다.\n", h3.name, h3.age);

	Myst m;
	m.a = 10;
	m.b = 20;
	printf("a: %d\nb: %d\n", m.a, m.b);


	return 0;
}