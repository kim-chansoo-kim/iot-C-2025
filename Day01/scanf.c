/* 입력 - scanf() */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int inputVal;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &inputVal);							// &주소연산자, scanf()에는 다른 어떤 문자열도 들어갈 수 없다

	printf("입력한 정수는 %d 입니다.\n", inputVal);

	int n1, n2;
	printf("두개의 정수를 입력하세요");
	scanf_s("%d %d", &n1, &n2);

	printf("입력한 정수는 %d 와 %d 입니다.\n", n1, n2);
	return 0;
}