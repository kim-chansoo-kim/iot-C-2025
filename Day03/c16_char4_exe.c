/* 입력된 문자가 대문자라면 소문자로 소문자라면 대문자로 변환하는 프로그램 작성*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    char ch;

    while(1){
        printf("문자를 입력하세요 \n(종료버튼: [): ");
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
        printf("변환된 문자: %c\n\n", ch);
    }
    
    return 0;
}