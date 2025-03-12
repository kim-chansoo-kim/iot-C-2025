/*for문*/
#include <stdio.h>

int main()
{
	//for(초기식; 조건식; 증감식;){ }
	for (int i = 0; i < 10; i++) {
		printf("i: %d\n", i);
	}
	int sum = 0;							// 누적 시키는 값은 항상 초기화
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1~10까지 합은 %d입니다.", sum);
	return 0;
}