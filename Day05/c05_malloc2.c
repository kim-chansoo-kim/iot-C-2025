#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[100];
	char* ps;
	int i;

	// 예제 - 문자열을 5번 받아서 힙영역에 저장
	for (i = 0; i < 5; i++)
	{
		printf("문자열을 입력하세요>> ");
		gets(str);
		//printf("입력한 문자열: %s\n", str);
		/*문자열 저장*/
		ps = (char*)malloc(strlen(str) + 1);		// 입력된 문자열을 저장할 공간을 힙으로 부터 할당 받는다.( +1 == 널 자리)
		if (ps == NULL)
		{
			exit(1);
		}
		strcpy(ps, str);							// 문자열 복사
		printf("heap: %s\n", ps);

		free(ps);									// 동적 메모리 반환
	}
	printf("입력받은 문자열: %s", ps);

	return 0;
}