#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("%d - совершенный квадрат.\n", num);
    } else {
        printf("%d - не совершенный квадрат.\n", num);
    }

    return 0;
}
