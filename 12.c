#include <stdio.h>

int main() {
    int n;
    printf("������� ������ �������: ");
    scanf("%d", &n);

    int arr[n];
    printf("������� %d ��������� �������:\n", n);
    
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

    printf("������ �����: %d\n", evenCount);
    printf("�������� �����: %d\n", oddCount);

    return 0;
}
