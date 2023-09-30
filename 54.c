#include <stdio.h>
#include <string.h>

void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int areAnagrams(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0;
    }

    sortString(str1);
    sortString(str2);

    return strcmp(str1, str2) == 0;
}

int main() {
    char str1[100], str2[100];
    
    printf("Введите первую строку: ");
    scanf("%s", str1);

    printf("Введите вторую строку: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("Строки являются анаграммами.\n");
    } else {
        printf("Строки не являются анаграммами.\n");
    }

    return 0;
}
