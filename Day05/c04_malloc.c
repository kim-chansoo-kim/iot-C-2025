/*
	�޸� ���� �Ҵ�: malloc - free ���� �׻� ���̴ٴ�
	calloc - �޸� ���� �Ҵ��Ͽ� 0���� �ʱ�ȭ
	realloc - ũ������
*/
#include <stdio.h>
#include <stdlib.h>		// ������� ����

int main()
{
	//(int*)malloc(sizeof(int));�̷��� �ᵵ ����
	int* pi = (void*)malloc(sizeof(int));		// �������� �Է�ũ�⸸ŭ �޸� ������ �Ҵ�޾Ƽ� ���� �ּҸ� �����Ѵ�.
	if (pi == NULL)
	{
		printf("�޸� �Ҵ� ����");
		exit(1);
	}
	printf("�Ҵ� ����!!");
	free(pi);		// �޴�����?
	return 0;
}