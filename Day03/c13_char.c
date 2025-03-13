/*
	문자(char)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch1;
	char ch2 = ' ';

	scanf(" %c %c", &ch1, &ch2);	// 빈공간을 줘서 예외 처리
	printf("[%c%c]", ch1, ch2);


	return 0;
}