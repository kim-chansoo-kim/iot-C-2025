/* 
	문자 전용 함수
	getchar, putchar - 송신(put), 수신(get)
*/
#include <stdio.h>

int main()
{
	int ch;

	ch = getchar();				// 한 문자를 읽어오는 함수 - 수신
	putchar(ch);				// 한 문자만 출력하는 함수 - 송신
	putchar('\n');

	printf("input: %d\n", ch);

	return 0;
}