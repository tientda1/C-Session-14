#include <stdio.h>

int countCharacter(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "Rikkei education";
    char ch;
    printf("Nhap ky tu can tim: ");
    scanf("%c", &ch);
    int count = countCharacter(str, ch);
    printf("Ky tu '%c' xuat hien %d lan trong chuoi '%s'.\n", ch, count, str);

    return 0;
}

