#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
    printf("Максимальное число: %d\n", max);
    
    return 0;
}
