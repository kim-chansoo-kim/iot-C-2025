#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  // strcpy�� ����Ϸ��� �� ��� ������ �����ؾ� ��

int main()
{
    char input[100];   // ����ڰ� �Է��� ���ڿ��� ������ �迭
    char copy[100];    // ����� ���ڿ��� ������ �迭
    char ch;
    int i = 0;

    printf("���ڿ��� �Է��ϼ��� (���͸� ������ ����˴ϴ�): ");

    // ����ڰ� �Է��� ���ڸ� �ϳ��� �����ͼ� �迭�� ����
    while ((ch = getchar()) != '\n' && i < 99)
    {
        input[i] = ch;  // �� ���� ����
        i++;
    }
    input[i] = '\0';  // �������� '\0'�� �߰��ؼ� ���ڿ� ����

    // strcpy()�� ����Ͽ� ����
    strcpy(copy, input);  // input�� copy�� ����

    // ��� ���
    printf("\n�Է��� ���ڿ�: %s\n", input);
    printf("����� ���ڿ�: %s\n", copy);

    return 0;
}