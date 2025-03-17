/*
	메모리 동적 할당: malloc - free 둘은 항상 같이다님
	calloc - 메모리 동적 할당하여 0으로 초기화
	realloc - 크기조절
*/
#include <stdio.h>
#include <stdlib.h>		// 헤더파일 포함

int main()
{
	//(int*)malloc(sizeof(int));이렇게 써도 가능
	int* pi = (void*)malloc(sizeof(int));		// 힙영역에 입력크기만큼 메모리 공간을 할당받아서 시작 주소를 리턴한다.
	if (pi == NULL)
	{
		printf("메모리 할당 실패");
		exit(1);
	}
	printf("할당 성공!!");
	free(pi);		// 메뉴해제?
	return 0;
}