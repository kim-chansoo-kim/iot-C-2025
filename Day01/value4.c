/* 배열 */
#include <stdio.h>

int main()
{	
	char str[10] = "banana";			// 문자타입 str이라는 방10개를 가진 배열선언

	printf("str: %s\n", str);
	printf("str[0]: %c\n", str[0]);		// banana의 0번 인덱스 b가 출력
	printf("str[1]: %c\n", str[1]);
	printf("str[5]: %c\n", str[5]);
	printf("str[6]: %c\n", str[6]);
	//printf("str[6]: %s\n", str[6]);		// C언어에서 문자열끝에는 항상 null문자가 온다

	char str2[6] = "apple";
	printf("str: %s\n", str2);
	str2[0] = 'A';
	printf("str2: %s\n", str2);
	//str = str2; 배열은 대입연산 불가능

	return 0;
}