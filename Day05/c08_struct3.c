#include <stdio.h>

struct profile
{
	int age;
	double height;
	double weight;
};

struct student
{
	struct profile pf;
	int id;
	double grade;
};

int main()
{
	struct student s;
	s.grade = 99;
	s.id = 18190032;
	s.pf.age = 26;
	s.pf.height = 170.2;
	s.pf.weight = 89.4;

	printf("����: %lf\n", s.grade);
	printf("�й�: %d\n", s.id);
	printf("����: %d\n", s.pf.age);
	printf("Ű: %.1lf\n", s.pf.height);
	printf("������: %.1lf\n", s.pf.weight);

	return 0;
}