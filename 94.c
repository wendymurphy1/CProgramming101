#include <stdio.h>

int isBinaryPalindrome(int num) {
    int binary[32] = {0};
    int index = 0;

    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }

    for (int i = 0; i < index / 2; ++i) {
        if (binary[i] != binary[index - i - 1]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);

    if (isBinaryPalindrome(num)) {
        printf("%d - ��������� � �������� �������.\n", num);
    } else {
        printf("%d - �� ��������� � �������� �������.\n", num);
    }

    return 0;
}
