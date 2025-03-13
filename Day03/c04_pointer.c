/* 
	포인터(pointer) - 주소
	포인터 변수 - 주소를 저장할 수 있는 변수
*/

#include <stdio.h>

int main()
{
	//int p;					// int타입의 p라는 변수를 선언
	//int* p;					// int타입의 "포인터 변수" p를 선언 - 포인터 변수크기는 무조건 4byte
	//char* pc;				// char타입의 "포인터 변수" pc를 선언 - 포인터 변수크기는 무조건 4byte
	//double *pd;				// 이름에 붙이나 자료형에 붙이나 상관은 없음

	int num = 100;
	printf("num의 주소: %p\t", &num);
	printf("num의 값: %d\n", num);
	int* p = &num;												// point변수에 붙은 *은 아무런 의미가 없고 그냥 선언
	printf("포인터변수 p에 저장된 값(주소): %p\t", p);
	printf("포인터변수 p가 가리키는 곳의 값: %d\n", *p);		// * 간접 참조 연산자
	
	num += 1;
	printf("num의 값: %d, p가 가리키는 값: %d\n", num, *p);		// 변수의 값을 변경함 - 101
	*p += 1;
	printf("num의 값: %d, p가 가리키는 값: %d\n", num, *p);		// 포인터로도 접근 가능 - 102

	return 0;
}