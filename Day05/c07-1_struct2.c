/*

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct mystruct
{
	char name[20];
	int age;
	double height;
	char* str;
};

int main()
{
	struct mystruct s;								// mtstruct ����ü ���� 's' ����
	strcpy(s.name, "������");
	s.age = 26;
	s.height = 170.2;
	s.str = (char*)malloc(sizeof(100));
	printf("�λ縻: ");
	gets(s.str);

	printf("�̸�: %s\n", s.name);
	printf("����: %d\n", s.age);
	printf("Ű: %.1lf\n", s.height);
	printf("�λ縻: %s\n", s.str);

	free(s.str);

	return 0;
}