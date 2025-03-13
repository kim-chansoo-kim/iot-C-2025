#include <stdio.h>
#define MAX_SIZE 100

void inputAry(int ary[], int size);
void printAry(int ary[], int size);

int main()
{
    int size;
    printf("�迭�� ũ�⸦ �Է��ϼ���: ");
    scanf_s("%d", &size);

    if (size > MAX_SIZE) {
        printf("ũ�Ⱑ �ʹ� Ů�ϴ�! %d ���Ϸ� �Է��ϼ���.\n", MAX_SIZE);
        return 1;
    }

    int ary[MAX_SIZE];
    inputAry(ary, size);
    printAry(ary, size);

    return 0;
}

void inputAry(int ary[], int size)
{
    printf("�迭�� �� ������ �Է��ϼ���: ");
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &ary[i]);
    }
}

void printAry(int ary[], int size)
{
    printf("ary: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ary[i]);
    }
    printf("\n");
}
