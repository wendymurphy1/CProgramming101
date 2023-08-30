#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Введите два числа: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);
    printf("НОД: %d\n", result);

    return 0;
}
