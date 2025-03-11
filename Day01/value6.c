/* 상수 */
#include <stdio.h>

int main()
{	
	int r = 10;
	const double pi = 3.14;				// pi라는 변수 이름 자체를 const로 상수로 선언하고 3.14로 초기화
	double cf = 2 * pi * r;

	//pi = 3.15; 위에서 pi를 상수로 바꿈
	printf("원둘레: %.2lf\n", cf);
	return 0;
}