/* 변수 선언 */
#include <stdio.h>

int main()
{
	int c;				// 자료형 변수명
	c = 10;
	int num2 = 10;		// 변수의 초기화 (변수를 만들면서 값을 넣음)
	char ch = 'A';		// 문자타입의 변수 선언
	double db = 3.14;	// 정확하게 실수를 표현하는 double

	printf("c의 값: %d\n", c);
	printf("num2의 값: %d\n", num2);
	printf("ch의 값: %c\n", ch);

	return 0;
}