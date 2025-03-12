/*While문*/
#include <stdio.h>

int main()
{
	int i = 1;
	while (i < 6) {
		printf("안녕하세요.%d\n", i++);
	}
	int i = 0;
	while (i < 5) {
		printf("안녕하세요.%d\n", i + 1);
		i++;
	}
	int i = 1;
	int sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("1 ~ 100까지의 합: %d", sum);
	return 0;
}