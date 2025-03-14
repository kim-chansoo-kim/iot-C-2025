/*
	strcmp - 문자열 비교 함수(알파벳 사전순으로)
*/
#include <stdio.h>

int main()
{
	char str[100] = "apple";
	char str2[100] = "orange";

	// str이 사전에서 먼저 나오면 -1반환(apple), str2가 먼저 나오면 1 반환(orange), 만약 같다면 0으로 반환
	if (strcmp(str, str2) > 0) printf("%s\n", str);		// 
	else printf("%s\n", str2);							// a가 작기 때문에 orange출력
	return 0;
}