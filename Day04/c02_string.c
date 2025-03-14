/* 
	문자열 == 주소
*/
#include <stdio.h>

int main()
{
	char str[100] = "orange";

	printf("%s\n", str);
	printf("%s\n", "orange");
	printf("%p\n", "orange");
	printf("%c\n", *"orange"); // 간접참조
	printf("%c\n", *("orange" + 1)); // 2번째 주소인 r 출력
	printf("%c\n", "orange"[2]); // 배열 형식

	//"orange"[0] = '0';
	*"orange" = 'O';
	printf("%s\n", str);

	return 0;
}

/*
	data
	- 힙: 사용자에게 할당된 메모리 영역
	- stack: 지역변수, 매개변수
	- Data: 전역변수, static
	- Rod: 문자열 상수, 리터럴
*/