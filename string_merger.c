#include <stdio.h>

int main() {
    char a[100];
    char b[100];
    char c[200];
    int i, j;
    
    printf("Enter a word: ");
    fgets(a, sizeof(a), stdin);
    
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == '\n') {
            a[i] = '\0';
            break;
        }
    }
    
    printf("Enter the remaining part: ");
    fgets(b, sizeof(b), stdin);
    
    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] == '\n') {
            b[i] = '\0';
            break;
        }
    }
    
    for (i = 0; a[i] != '\0'; i++) {
        c[i] = a[i];
    }
    for (j = 0; b[j] != '\0'; j++) {
        c[i + j] = b[j];
    }
    
    c[i + j] = '\0';
    
    printf("The concatenated string is: %s\n", c);
    
    return 0;
}
