#include <stdio.h>

void swap(int *pa, int *pb);

int main()
{
	int a = 10;
	int b = 20;

	printf("ȣ�� �� a: %d, b: %d\n", a, b);

	swap(&a, &b);
	printf("ȣ�� �� a: %d, b: %d\n", a, b);
	return 0;
}

void swap(int *pa, int *pb) 	// pa = 10, pb = 20
{
	int temp;
	temp = *pa;				// temp = 10
	*pa = *pb;					// pa = 20
	*pb = temp;				// pb = 10
}
// �̷��� �ۼ��ϸ� ���� �ٲ��� ����