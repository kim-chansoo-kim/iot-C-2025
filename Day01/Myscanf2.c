#include <stdio.h>

int main()
{
	int age = 0;
	char str[20];

	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);
	printf("이름을 입력하세요: ");
	scanf_s("%s", str, sizeof(str));

	printf("입력한 나이: %d \n입력한 이름: %s\n", age, str);
	return 0;
}