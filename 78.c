#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("Сумма натуральных чисел меньших 1000, делящихся на 3 или 5: %d\n", sum);

    return 0;
}
