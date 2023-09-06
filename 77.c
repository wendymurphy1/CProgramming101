#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = (int) log10(num) + 1;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return original == sum;
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d - ����� ����������.\n", num);
    } else {
        printf("%d - �� ����� ����������.\n", num);
    }

    return 0;
}
