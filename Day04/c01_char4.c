#include <stdio.h>
void myStrInput(char* str);

int main()
{
	char str[100];

	myStrInput(str);
	printf("입력한 문자열: %s\n", str);

	return 0;
}

void myStrInput(char* str)
{
	char ch;
	int i = 0;
	printf("문자열을 입력하세요(최대 100): ");

	while (i < 99)	// 조건 1.엔터를 치기전, 조건 2.100글자 보다 적을때 반복
	{
		ch = getchar();

		// 엔터('\n')를 입력하면 종료
		if (ch == '\n')
		{
			break;
		}

		// '#'을 입력하면 조기 종료
		if (ch == '#')
		{
			printf("\n'#' 입력으로 조기 종료!\n");
			break;
		}

		str[i] = ch;
		i++;
	}
	str[i] = '\0'; // null자리 끝에 넣기
}

// 강사님 버전
/*void myStrInput(char* ps, int size)
{
	int i = 0;
	while (1)
	{
		ps[i] = getchar();
		if (ps[i] == '\n' || i >= (size - 1)) break;
		i++;
	}
	ps[i] = '\0';
}*/