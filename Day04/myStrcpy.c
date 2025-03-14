#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  // strcpy를 사용하려면 이 헤더 파일을 포함해야 함

int main()
{
    char input[100];   // 사용자가 입력한 문자열을 저장할 배열
    char copy[100];    // 복사된 문자열을 저장할 배열
    char ch;
    int i = 0;

    printf("문자열을 입력하세요 (엔터를 누르면 종료됩니다): ");

    // 사용자가 입력한 문자를 하나씩 가져와서 배열에 저장
    while ((ch = getchar()) != '\n' && i < 99)
    {
        input[i] = ch;  // 한 글자 저장
        i++;
    }
    input[i] = '\0';  // 마지막에 '\0'을 추가해서 문자열 종료

    // strcpy()를 사용하여 복사
    strcpy(copy, input);  // input을 copy로 복사

    // 결과 출력
    printf("\n입력한 문자열: %s\n", input);
    printf("복사된 문자열: %s\n", copy);

    return 0;
}