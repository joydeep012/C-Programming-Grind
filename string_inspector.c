#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a word: ");
    fgets(str,sizeof(str),stdin);

    while (str[length] != '\0') {
        length++;
    }

    printf("The length of the string is: %d\n", length);

    printf("Reverse: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}