/*출력*/
#include <stdio.h>

int main()
{
	printf("정수출력: %d\n", 10);		   // 정수출력 %d
	printf("실수출력: %lf\n", 3.14);	   // 실수출력 %lf
	printf("실수출력: %.4lf\n", 3.141592); // %.4는 소숫점아래 4째자리까지만 출력
	printf("%d 그리고 %d\n", 10, 20);	   // 순서대로 %d에 대입
	return 0;
}