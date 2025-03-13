/*
	두 값을 바꾸는 알고리즘
*/

#include <stdio.h>

int main()
{	
	// 변경 전
	int a = 10;
	int b = 20;
	printf("변경 전 a: %d, b: %d\n", a, b);

	// 변경 후 - 임시변수 선언
	int temp = a;
	a = b;
	b = temp;
	printf("변경 후 a: %d, b: %d\n", a, b);

	return 0;
}