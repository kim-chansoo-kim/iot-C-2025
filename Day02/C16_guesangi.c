#include <stdio.h>
// 더하기
int sum(int a, int b)
{
	int res1 = a + b;
	return res1;
}
// 빼기
int sub(int a, int b)
{
	int res2 = a - b;
	return res2;
}
// 곱하기
int mul(int a, int b)
{
	int res3 = a * b;
	return res3;
}
// 나누기
int div(int a, int b)
{
	int res4 = a / b;
	return res4;
}
// 메인함수
int main()
{
	int a, b;
	char y, q;
	printf("계산기 프로그램입니다.\n");
	printf("사용 가능한 연산자: +, -, *, /\n");

	while (1) {
		printf("두개의 정수를 입력하세요.\n");
		scanf_s("%d %d", &a, &b);

		printf("연산자를 입력하세요.\n");
		scanf_s(" %c", &y, 1);

		if (y == '+') {
			printf("더하기 값: %d\n\n", sum(a, b));
		}
		else if (y == '-') {
			printf("빼기 값: %d\n\n", sub(a, b));
		}
		else if (y == '*') {
			printf("곱하기 값: %d\n\n", mul(a, b));
		}
		else if (y == '/') {
			if (b != 0) {
				printf("나누기 값: %d\n\n", div(a, b));
			}
			else {
				printf("0으로는 못나눠!!\n\n");
			}
		}
		else {
			printf("불가능한 연산자입니다.\n\n");
		}

		printf("종료하려면 소문자'q'를 입력하세요: \n");
		scanf_s("%c", &q);

		if (q == 'q') {
			break;
		}
	}
	return 0;
}