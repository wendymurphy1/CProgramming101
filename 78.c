#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("����� ����������� ����� ������� 1000, ��������� �� 3 ��� 5: %d\n", sum);

    return 0;
}
