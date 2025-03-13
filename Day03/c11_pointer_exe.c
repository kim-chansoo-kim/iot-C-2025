#include <stdio.h>
#define MAX_SIZE 100

void inputAry(int ary[], int size);
void printAry(int ary[], int size);

int main()
{
    int size;
    printf("배열의 크기를 입력하세요: ");
    scanf_s("%d", &size);

    if (size > MAX_SIZE) {
        printf("크기가 너무 큽니다! %d 이하로 입력하세요.\n", MAX_SIZE);
        return 1;
    }

    int ary[MAX_SIZE];
    inputAry(ary, size);
    printAry(ary, size);

    return 0;
}

void inputAry(int ary[], int size)
{
    printf("배열에 들어갈 정수를 입력하세요: ");
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
