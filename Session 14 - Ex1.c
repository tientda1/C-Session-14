#include <stdio.h>
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    int len = stringLength(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int length = stringLength(str);

    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai cua chuoi: %d\n", length);

    return 0;
}

