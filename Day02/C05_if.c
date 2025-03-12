#include <stdio.h>

int main()
{
	//int num = 10;
	//if (num > 10 || num < 10) {		// || 관계연산자 or
	//	printf("거짓입니다.");
	//}
	//else {
	//	printf("참입니다.");
	//}

	int n;
	while (1) {
		printf("수를 입력해주세요: ");
		scanf_s("%d", &n);
		if (n == 5) {
			printf("정답!\n");
			break;
		}
		else if (n < 5) {
			printf("땡! 큰 숫자를 입력하세요!\n");
		}
		else {
			printf("땡! 더 작은 숫자를 입력하세요!\n");
		}
	}
	return 0;
}