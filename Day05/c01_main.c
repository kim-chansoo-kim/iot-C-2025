#include <stdio.h>

int main(int argc, char ** argv)// 이중포인터를 변경 가능 char * argv[] == 포인터배열	// 운영체재가 실행
{
	int i = 0;
	printf("전달갯수: %d\n", argc);
	for (i = 0; i < argc; i++) {
		//printf("전달 값: %s\n", i, argv[i]);

	}

	return 0;
}