#include <stdio.h>

/* ������ */

int main() {

	char str[50] = "abcqdefqpppoqaws";
	// �����͸� Ȱ���ؼ� q ���� ã��, q �� Q �� �ٲٽÿ�.
	char* pC = str;

	while (*pC != '\0') {
		if (*pC == 'q') {
			*pC = 'Q';
		}
		pC += 1; 
	}

	printf("%s", str);
	// ���  printf("%s",str) ----> abcQdefQpppoQaws
	return 0;
}