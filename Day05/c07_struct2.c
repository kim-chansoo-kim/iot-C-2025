/*
	
*/
#include <stdio.h>

struct mystruct
{
	int num;		// 100
	double grade;	// 99.9
};

int main()
{
	struct mystruct s;
	s.num = 100;
	s.grade = 99.9;
	printf("num: %d\n", s.num);
	printf("num: %.1lf\n", s.grade);
	return 0;
}