/* 문자열 입력 */
#include <stdio.h>

int main()
{
	char str[20];
	printf("문자열을 입력하세요: ");
	scanf_s("%s", str, sizeof(str));		  // str의 사이즈20만큼만 입력을 받기

	printf("입력한 문자열: %s\n", str);

	//printf("char 크기: %d\n", sizeof(char));		//char 크기: 1
	//printf("정수 크기: %d\n", sizeof(int));			//정수 크기: 4
	//printf("float 크기: %d\n", sizeof(float));		//float 크기: 4
	//printf("double 크기: %d\n", sizeof(double));    //double 크기: 8

	
	
	
	
	return 0;
}