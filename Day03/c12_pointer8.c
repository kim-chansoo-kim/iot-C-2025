#include <stdio.h>

int main()
{
	const int num = 10;
	//num = 20;

	int num2 = 10;
	num2 = 20;
	int* pnum2 = &num2;
	*pnum2 = 30;
	printf("%d\n", num2);

	const int* pn2 = &num2;		
	/*const int* pn2 = &num2;
	데이터 상수 - 포인터변수를 통한 데이터의 변경을 불허한다.

	→ "포인터가 가리키는 데이터(num2)를 변경할 수 없음"

	→ *pn2 = 100; 하면 오류 발생!*/
	num2 = 0;

	// 동작 가능
	int num3 = 40;
	int* const pnum3 = &num3;	
	/*int* const pnum3 = &num3;
	*  포인터 상수 - 포인터변수가 가리키는 주소의 변경을 불허한다.

	→ "포인터 pnum3가 가리키는 주소를 변경할 수 없음"

	*pnum3 = 100;
	→ 가능! (가리키는 데이터 변경 가능)*/

	*pnum3 = 100;
	printf("%d\n", num3);
	//pnum3 = &num2;

	const int* const pn5 = &num2;
	// *pn5 = 1000;
	// pn5 = &num3;
	num2 = 40;

	return 0;
}