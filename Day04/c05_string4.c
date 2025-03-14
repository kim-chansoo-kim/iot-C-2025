/*
	puts, fputs - 전용 출력 함수
*/
#include <stdio.h>

int main()
{
	char str[100] = "Delmonte orange";
	char* ps = "banana";


	printf("%s\n", str);
	puts(str);					// 자동 개행
	fputs(str, stdout);			// 자동 개행 안됨
								// fputs(문자열, 출력_스트림);
								/*첫 번째 매개변수(str): 출력할 문자열
								  두 번째 매개변수(stdout): 출력할 대상 (표준 출력 = 화면)*/
	puts(ps);
	fputs(ps, stdout);

	return 0;
}