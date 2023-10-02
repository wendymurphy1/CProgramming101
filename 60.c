#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int smallestMultiple(int n) {
    int result = 1;

    for (int i = 2; i <= n; ++i) {
        result = lcm(result, i);
    }

    return result;
}

int main() {
    int n;
    
    printf("������� n: ");
    scanf("%d", &n);

    int result = smallestMultiple(n);
    printf("���������� �����, ������� ������� �� ����� �� 1 �� %d: %d\n", n, result);

    return 0;
}
