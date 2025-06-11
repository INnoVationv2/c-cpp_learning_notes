#include <stdio.h>

int main() {
    printf("Enter a first and last name: ");
    char last_name = getchar();

    while (getchar() != ' ') {
    }

    char ch;
    while (ch = getchar()) {
        if (ch == '\n' || ch == ' ') {
            break;
        }
        putchar(ch);
    }
    printf(", %c.", last_name);
    return 0;
}
