/* ������ �迭 */
#include <stdio.h>

int main()
{
	int ary[5] = { 1, 2, 3, 4, 5 };			// ������ �迭���� �� ���� ���� // ������ �迭�� null�ڸ��� �ʿ� ����

	printf("ary[0]: %d\n", ary[0]);			// �ε��� 0���ڸ��� 1���
	ary[3] = 400;
	printf("ary[3]: %d\n", ary[3]);

	for(int i = 0; i < 5; i++){
		printf("ary[%d]: %d\n", i, ary[i]);
	}
	return 0;