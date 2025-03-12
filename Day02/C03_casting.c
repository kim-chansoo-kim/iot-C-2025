/*  */
#include <stdio.h>

int main()
{
	int n = 10;
	int n2 = 3;
	double res;

	res = n / 2;
	printf("res: %.1lf\n", res);

	res = (double)n / 3;			// 형태변환: 정수를 실수 형태로
	printf("res: %.1lf\n", res);

	res = n / 3.0;					// 위와 동일한 답으로 나옴
	printf("res: %.1lf\n", res);

	res = (double)n / 3.0;			// 위와 동일한 답으로 나옴
	printf("res: %.1lf\n", res);

	return 0;
}