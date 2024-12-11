#include <stdio.h>

int letter(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}
int countLetters(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (letter(str[i])) {
            count++;
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

    int letterCount = countLetters(str);
    printf("So ky tu la chu cai trong chuoi la: %d\n", letterCount);

    return 0;
}

