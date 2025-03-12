/* 논리·비트 연산자 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 30;
	int res;

	res = (n > 10) && (n < 20);		// && -> AND (둘 다 참이어야 참)
	printf("res: %d\n", res);

	res = (n < 10) || (n > 20);		// || -> OR (둘 중 하나라도 참이면 참)
	printf("res: %d\n", res);

	res = !(n >= 30);				// ! -> NOT (참을 거짓으로, 거짓을 참으로)
	printf("res: %d\n", res);

	res = ~n;						// ~ -> 비트 반전 (모든 비트를 0 <-> 1로 뒤집음, 결과적으로 -1을 뺀 음수 형태가 됨)
	printf("res: %d\n", res);
	
	res = n << 1;					// << -> 왼쪽 시프트 연산자(Left Shift)로, 비트를 왼쪽으로 이동시키는 연산
	printf("res: %x\n", res);


	res = res >> 1;					// << -> 오른쪽 시프트 연산자(Right Shift)로, 비트를 오른쪽으로 이동시키는 연산
	printf("res: %x\n", res);

	int n2 = 143;					// 0b 1000 1111
	res = n2 << 1;					// 0b 1 0001 1110
	printf("res: %x\n", res);
	res = res >> 1;					// 0b 1100 0111
	printf("res: %x\n", res);

	return 0;
}