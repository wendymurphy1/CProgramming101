#include <stdio.h>

int main() {
    int size;
    printf("������� ������ ���������� �������: ");
    scanf("%d", &size);

    int matrix[size][size];
    printf("������� �������� �������:\n");
    
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += matrix[i][i];
    }

    printf("����� ������� ���������: %d\n", sum);

    return 0;
}
