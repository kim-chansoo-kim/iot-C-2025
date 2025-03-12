/*	
	함수 원형
	함수 원형, 함수 호출, 함수 정의
*/
#include <stdio.h>

int func(int, int); // 함수선언, 함수원형 - 밑에 사용자 정의 함수가 있음을 알려줘야함 
// 변수이름을 써도 되고 타입만 적어도됨
int main()
{
	int result = func(10, 20);
	printf("호출 후 리턴된 값: %d\n", result);

	return 0;
}

int func(int a, int b) {
	int res = a + b;
	return res;
}
