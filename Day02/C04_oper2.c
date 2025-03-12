/* 삼항 연산자 */

#include <stdio.h>

int main()
{
	int n = 10, n2 = 20;
	int res;

	res = (n < n2) ? n : n2;	// 삼항 연산자(조건 ? 값1 : 값2)는 조건이 참이면 값1을 반환, 거짓이면 값2를 반환하는 연산자
	printf("res: %d\n", res);

	res = n++;
	printf("n++: %d, n: %d\n",res, n);
	res = ++n2;
	printf("++n2: %d, n2: %d\n", res, n2);

	return 0;
}



/* 삼항 연산자의 장점
코드가 간결해짐 → if-else 문보다 짧고 직관적.
단순한 조건 판단에 유용함 → 값을 바로 대입 가능.
하지만 복잡한 조건이 많다면 if-else를 사용하는 것이 가독성이 좋을 수도 있음.*/