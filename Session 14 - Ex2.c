#include <stdio.h>
int main() {
    char str[] = "Rikkei education!";
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}

