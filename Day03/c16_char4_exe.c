/* �Էµ� ���ڰ� �빮�ڶ�� �ҹ��ڷ� �ҹ��ڶ�� �빮�ڷ� ��ȯ�ϴ� ���α׷� �ۼ�*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    char ch;

    while(1){
        printf("���ڸ� �Է��ϼ��� \n(�����ư: [): ");
        scanf("%c", &ch);

        getchar();

        if (ch == '[') {
            break;
        }

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 'a' - 'A';
        }
        else if (ch >= 'a' && ch <= 'z') 
        {
            ch = ch - 'a' + 'A';
        }
        printf("��ȯ�� ����: %c\n\n", ch);
    }
    
    return 0;
}