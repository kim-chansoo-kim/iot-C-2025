/*for��*/
#include <stdio.h>

int main()
{
	//for(�ʱ��; ���ǽ�; ������;){ }
	for (int i = 0; i < 10; i++) {
		printf("i: %d\n", i);
	}
	int sum = 0;							// ���� ��Ű�� ���� �׻� �ʱ�ȭ
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1~10���� ���� %d�Դϴ�.", sum);
	return 0;
}