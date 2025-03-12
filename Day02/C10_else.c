/*홀수 출력*/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue;        // i가 0이면 continue - 건너뛴다
        //if (i == 7) break;             // 반복문 빠져나가기
        if (i >= 7) break;               //  7보다 큰값이 나오는 예외까지 생각해서 이게 더 좋은 방법
        printf("%d\n", i);
    }
    return 0;
}