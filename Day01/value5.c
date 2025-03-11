/* 정수형 배열 */
#include <stdio.h>

int main()
{
	int ary[5] = { 1, 2, 3, 4, 5 };			// 정수형 배열선언 및 값을 지정 // 정수형 배열은 null자리가 필요 없음

	printf("ary[0]: %d\n", ary[0]);			// 인덱스 0번자리의 1출력
	ary[3] = 400;
	printf("ary[3]: %d\n", ary[3]);

	for(int i = 0; i < 5; i++){
		printf("ary[%d]: %d\n", i, ary[i]);
	}
	return 0;