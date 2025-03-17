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

	printf("점수: %lf\n", s.grade);
	printf("학번: %d\n", s.id);
	printf("나이: %d\n", s.pf.age);
	printf("키: %.1lf\n", s.pf.height);
	printf("몸무게: %.1lf\n", s.pf.weight);

	return 0;
}