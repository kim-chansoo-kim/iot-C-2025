#include <stdio.h>

int main()
{
	int ary[] = {1, 2, 3, 4, 5};


	printf("배열의 전체크기 %d\n", sizeof(ary));
	printf("배열 방한개의 크기 %d\n", sizeof(ary[0]));
	printf("배열 방의 갯수: %d\n", sizeof(ary) / sizeof(ary[0]));
	printf("배열 이름: %p\n", ary);
	printf("배열의 첫 번째방 주소: %p\n", &ary[0]);
	printf("배열의 두 번째방 주소: %p\n", ary + 1);
	printf("배열의 두 번째방 주소: %p\n", &ary[1]);

	int score[5];
	int size = sizeof(score) / sizeof(score[0]);

	for (int i = 0; i < size; i++) {
		printf("점수를 입력하세요 번째: ");
		scanf_s("%d", &score[i]);
	}
	for (int i = 0; i < size; i++) {
		printf("-%d-", score[i]);
	}

	return 0;
}