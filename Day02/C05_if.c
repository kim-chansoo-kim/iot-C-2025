#include <stdio.h>

int main()
{
	//int num = 10;
	//if (num > 10 || num < 10) {		// || ���迬���� or
	//	printf("�����Դϴ�.");
	//}
	//else {
	//	printf("���Դϴ�.");
	//}

	int n;
	while (1) {
		printf("���� �Է����ּ���: ");
		scanf_s("%d", &n);
		if (n == 5) {
			printf("����!\n");
			break;
		}
		else if (n < 5) {
			printf("��! ū ���ڸ� �Է��ϼ���!\n");
		}
		else {
			printf("��! �� ���� ���ڸ� �Է��ϼ���!\n");
		}
	}
	return 0;
}