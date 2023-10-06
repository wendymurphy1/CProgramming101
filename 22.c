#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;  // Ќачинаем с 1, так как 1 всегда делитель

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
    printf("¬ведите число: ");
    scanf("%d", &num);

    if (isPerfect(num)) {
        printf("%d - совершенное число.\n", num);
    } else {
        printf("%d - не совершенное число.\n", num);
    }

    return 0;
}
