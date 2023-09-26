#include <stdio.h>

int main() {
    int size;
    printf("¬ведите размер квадратной матрицы: ");
    scanf("%d", &size);

    int matrix[size][size];
    printf("¬ведите элементы матрицы:\n");
    
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += matrix[i][i];
    }

    printf("—умма главной диагонали: %d\n", sum);

    return 0;
}
