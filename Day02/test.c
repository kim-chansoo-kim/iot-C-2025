#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    // ����ڿ��� �ȳ� �޽��� ���
    printf("������ ����\n");
    printf("��� ������ ����: +, -, *, /\n");

    // ù ��° ���� �Է�
    printf("ù ��° ���ڸ� �Է��ϼ���: ");
    scanf("%f", &num1);

    // ������ �Է�
    printf("�����ڸ� �Է��ϼ��� (+, -, *, /): ");
    scanf(" %c", &operation);

    // �� ��° ���� �Է�
    printf("�� ��° ���ڸ� �Է��ϼ���: ");
    scanf("%f", &num2);

    // ���� ����
    if (operation == '+') {
        result = num1 + num2;
    }
    else if (operation == '-') {
        result = num1 - num2;
    }
    else if (operation == '*') {
        result = num1 * num2;
    }
    else if (operation == '/') {
        if (num2 == 0) {
            printf("����! 0���� ���� �� �����ϴ�.\n");
            return 1;
        }
        result = num1 / num2;
    }
    else {
        printf("�߸��� �������Դϴ�!\n");
        return 1;
    }

    // ��� ���
    printf("���: %.2f\n", result);
    return 0;
}
