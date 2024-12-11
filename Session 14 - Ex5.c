#include <stdio.h>

int countWords(char str[]) {
    int count = 0;
    int inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && inWord == 0) {
            inWord = 1;
            count++;
        } else if (str[i] == ' ') {
            inWord = 0;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int wordCount = countWords(str);

    printf("So tu trong chuoi la: %d\n", wordCount);

    return 0;
}

