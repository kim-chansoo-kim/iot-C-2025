/*While��*/
#include <stdio.h>

int main()
{
	int i = 1;
	while (i < 6) {
		printf("�ȳ��ϼ���.%d\n", i++);
	}
	int i = 0;
	while (i < 5) {
		printf("�ȳ��ϼ���.%d\n", i + 1);
		i++;
	}
	int i = 1;
	int sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("1 ~ 100������ ��: %d", sum);
	return 0;
}