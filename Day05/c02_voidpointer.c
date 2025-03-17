/*
	함수 포인터 - 함수의 이름
*/
#include <stdio.h>

/*int sum(int a, int b)
{
	int res = a + b;
	return res;
}

int sub(int a, int b)
{
	int res2 = a - b;
	return res2;
}
*/
int add(int x, int y)
{ 
	return x + y; 
}
int subtract(int x, int y) 
{ 
	return x - y; 
}
int multiply(int x, int y)
{ 
	return x * y; 
}
int divide(int x, int y)
{ 
	return (y != 0) ? (x / y) : 0;
}

//int sum(int, int);
//int sub(int, int);
void func(int(*fp)(int, int))
{
	int a, b;
	printf("두 개의 정수를 입력하세요: ");
	scanf_s("%d %d", &a, &b);

	printf("결과: %d\n", fp(a, b));
}

int main() 
{
	/*int (*fp)(int, int);
	int res;
	int res2;
	res = sum(20, 10);
	res2 = sub(20, 10);
	fp = sum;
	res = fp(20, 10);
	printf("res: %d\n", res);
	printf("res2: %d\n", res2);*/
	int pong;

	while (1) {
		printf("\n어떤 연산을 수행하시겠습니까?\n");
		printf("1. 더하기\n2. 빼기\n3. 곱하기\n4. 나누기\n5. 종료\n");
		printf("선택: ");
		scanf_s("%d", &pong);

		if (pong == 5) {
			printf("프로그램을 종료합니다.\n");
			break;
		}

		switch (pong) {
		case 1: func(add); break;
		case 2: func(subtract); break;
		case 3: func(multiply); break;
		case 4: func(divide); break;
		default: printf("잘못된 입력입니다. 다시 시도하세요.\n");
		}
	}
	return 0;
}