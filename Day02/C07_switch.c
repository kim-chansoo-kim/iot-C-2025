/* Switch문 */
#include <stdio.h>

int main()
{
	int num = 5;
	while(1){
		printf("수를 입력하세요: ");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			printf("너무 작소!, 다시!\n");
			break;
		case 2:
			printf("너무 작소!, 다시!\n");
			break;
		case 3:
			printf("너무 작소!, 다시!\n");
			break;
		case 4:
			printf("너무 작소!, 다시!\n");
			break;
		case 5:
			printf("딩동댕!\n");
			return 0;
		default:
			printf("이것도 저것도 아님\n");
			break;
		}
	}
	return 0;
}

// switch(조건식) ~ case: