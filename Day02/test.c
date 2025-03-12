#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    // 사용자에게 안내 메시지 출력
    printf("간단한 계산기\n");
    printf("사용 가능한 연산: +, -, *, /\n");

    // 첫 번째 숫자 입력
    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%f", &num1);

    // 연산자 입력
    printf("연산자를 입력하세요 (+, -, *, /): ");
    scanf(" %c", &operation);

    // 두 번째 숫자 입력
    printf("두 번째 숫자를 입력하세요: ");
    scanf("%f", &num2);

    // 연산 수행
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
            printf("오류! 0으로 나눌 수 없습니다.\n");
            return 1;
        }
        result = num1 / num2;
    }
    else {
        printf("잘못된 연산자입니다!\n");
        return 1;
    }

    // 결과 출력
    printf("결과: %.2f\n", result);
    return 0;
}
