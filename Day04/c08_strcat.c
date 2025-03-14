/*
	strcat - 문자열을 붙히는 함수
*/
#include <stdio.h>
// #include <string.h>

int main()
{
	char str[100] = "apple";

	strcat(str, "banana");
	printf("출력값: %s\n", str);	// 출력값: applebanana

	strncat(str, "orange", 3);
	printf("출력값: %s\n", str);	// 출력값: applebanana'ora' 3개만 붙음
	return 0;
}