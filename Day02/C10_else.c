/*Ȧ�� ���*/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue;        // i�� 0�̸� continue - �ǳʶڴ�
        //if (i == 7) break;             // �ݺ��� ����������
        if (i >= 7) break;               //  7���� ū���� ������ ���ܱ��� �����ؼ� �̰� �� ���� ���
        printf("%d\n", i);
    }
    return 0;
}