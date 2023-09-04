#include <stdio.h>

double reciprocalSumOfDivisorSquares(int num) {
    double sum = 0;

    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            sum += 1.0 / (i * i);
        }
    }

    return sum;
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);

    double result = reciprocalSumOfDivisorSquares(num);
    printf("�����, ������� ���������������� ����� ��������� ��� ���������: %lf\n", result);

    return 0;
}
