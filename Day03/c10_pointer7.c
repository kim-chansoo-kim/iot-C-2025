# include <stdio.h>
void printAry(int ary[]);
void printAry2(int ary2[], int size);

int main()
{
	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int ary2[] = { 1,2,3 };

	int size = sizeof(ary2) / sizeof(ary2[0]);

	printAry(ary);
	printAry2(ary2, size);

	return 0;
}

void printAry(int ary[])
{
	printf("printAry: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", ary[i]);
	}
}

void printAry2(int *p, int _size)
{
	printf("printAry: ");
	for (int i = 0; i < _size; i++)
	{
		printf("ary[%d]: %d\n", i, p[i]);
	}
}