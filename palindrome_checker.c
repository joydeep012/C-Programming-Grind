#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i, Pali = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            Pali = 0;
            break;
        }
    }

    if (Pali) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
