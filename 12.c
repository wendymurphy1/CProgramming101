#include <stdio.h>

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);

    int arr[n];
    printf("Введите %d элементов массива:\n", n);
    
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Четных чисел: %d\n", evenCount);
    printf("Нечетных чисел: %d\n", oddCount);

    return 0;
}
