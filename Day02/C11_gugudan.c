/*������*/
#include <stdio.h>

int main() {
    int g;
    printf("���� �Է��ϼ���: ");
    scanf_s("%d", &g);
    printf("----%d��----\n", g);

    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", g, i, g * i);
    }
    return 0;
}
