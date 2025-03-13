/*대문자 소문자 변환*/
#include <stdio.h>

int main()
{
	char ch1;
	char ch2 = 'C';
	if ((ch2 >= 'A') && (ch2 <= 'Z'))
	{
		ch1 = ch2 + ('a' - 'A');	// 아스키 코드값 큰수'a' - 작은수'A' == 32 // ch1 = ch2 + 32;
	}
	printf("대문자: %c\t", ch2);
	printf("소문자: %c\n", ch1);

	return 0;
}