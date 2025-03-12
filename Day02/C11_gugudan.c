/*구구단*/
#include <stdio.h>

int main() {
    int g;
    printf("단을 입력하세요: ");
    scanf_s("%d", &g);
    printf("----%d단----\n", g);

    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", g, i, g * i);
    }
    return 0;
}
