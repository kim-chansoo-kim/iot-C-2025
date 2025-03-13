#include <stdio.h>

/* 김찬수 */

int main() {

	char str[50] = "abcqdefqpppoqaws";
	// 포인터를 활용해서 q 값을 찾고, q 를 Q 로 바꾸시오.
	char* pC = str;

	while (*pC != '\0') {
		if (*pC == 'q') {
			*pC = 'Q';
		}
		pC += 1; 
	}

	printf("%s", str);
	// 결과  printf("%s",str) ----> abcQdefQpppoQaws
	return 0;
}