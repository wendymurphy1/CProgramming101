#include <stdio.h>
#include <math.h>

int isArmstrong(int num, int digits) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return original == sum;
}

int main() {
    int num, digits;
    
    printf("Введите число: ");
    scanf("%d", &num);

    printf("Введите число цифр: ");
    scanf("%d", &digits);

    if (isArmstrong(num, digits)) {
        printf("%d - число Армстронга с %d цифрами.\n", num, digits);
    } else {
        printf("%d - не число Армстронга с %d цифрами.\n", num, digits);
    }

    return 0;
}
