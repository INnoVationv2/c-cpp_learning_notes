#include <stdio.h>

int main() {
    printf("Enter a first and last name: ");
    char last_name = getchar();

    while (getchar() != ' ') {
    }

    char first_name[20];
    int idx = 0;
    char ch;
    while (ch = getchar()) {
        if (ch == '\n' || ch == ' ') {
            break;
        }
        first_name[idx++] = ch;
    }
    first_name[idx] = '\0';

    printf("You entered the name: %s, %c.\n", first_name, last_name);
    return 0;
}
