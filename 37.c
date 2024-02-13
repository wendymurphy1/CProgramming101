#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidEmail(char *email) {
    int len = strlen(email);
    int atCount = 0;

    if (len < 3 || len > 320) {
        return 0;
    }

    if (email[0] == '.' || email[len - 1] == '.') {
        return 0;
    }

    for (int i = 0; i < len; ++i) {
        if (email[i] == '@') {
            atCount++;
            if (atCount > 1) {
                return 0;
            }
        } else if (email[i] == '.') {
            if (i == 0 || i == len - 1 || email[i - 1] == '.' || email[i + 1] == '.') {
                return 0;
            }
        } else if (!isalnum(email[i]) && email[i] != '-' && email[i] != '_') {
            return 0;
        }
    }

    return atCount == 1;
}

int main() {
    char email[320];
    
    printf("������� email �����: ");
    scanf("%s", email);

    if (isValidEmail(email)) {
        printf("Email ����� �������.\n");
    } else {
        printf("Email ����� ���������.\n");
    }

    return 0;
}
