/* Switch�� */
#include <stdio.h>

int main()
{
	int num = 5;
	while(1){
		printf("���� �Է��ϼ���: ");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			printf("�ʹ� �ۼ�!, �ٽ�!\n");
			break;
		case 2:
			printf("�ʹ� �ۼ�!, �ٽ�!\n");
			break;
		case 3:
			printf("�ʹ� �ۼ�!, �ٽ�!\n");
			break;
		case 4:
			printf("�ʹ� �ۼ�!, �ٽ�!\n");
			break;
		case 5:
			printf("������!\n");
			return 0;
		default:
			printf("�̰͵� ���͵� �ƴ�\n");
			break;
		}
	}
	return 0;
}

// switch(���ǽ�) ~ case: