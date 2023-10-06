#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;  // �������� � 1, ��� ��� 1 ������ ��������

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }

    return sum == num;
}

int main() {
    int num;
    printf("������� �����: ");
    scanf("%d", &num);

    if (isPerfect(num)) {
        printf("%d - ����������� �����.\n", num);
    } else {
        printf("%d - �� ����������� �����.\n", num);
    }

    return 0;
}
