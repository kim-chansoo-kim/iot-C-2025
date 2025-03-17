/*
	void pointer - 비어있는 포인터
*/
#include <stdio.h>

int main()
{
	int n = 10;
	double db = 3.14;

	/*int pn = &n;
	double* pdb = &db;*/
	void* p;			// 보이드 포인터 선언
	
	(int*)p = &n;

	p = &n;
	printf("*p: %d\n", *(int*)p);



	p = &db;
	printf("*p: %.1lf\n", *(double*)p);

	return 0;
}