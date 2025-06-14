#include <ctype.h>
#include <stdio.h>

int main() {
    char msg[100], ch;
    int shift_amount = 0;

    printf("Enter message to be encrypted: ");
    fgets(msg, 100, stdin);

    printf("Enter shift amount: ");
    scanf("%d", &shift_amount);

    printf("Encrypted message: ");
    for (int idx = 0; (ch = msg[idx]) != '\n'; idx++) {
        if (ch >= 'A' && ch <= 'Z')
            ch = (ch - 'A' + shift_amount) % 26 + 'A';
        else if (ch >= 'a' && ch <= 'z')
            ch = (ch - 'a' + shift_amount) % 26 + 'a';
        putchar(ch);
    }

    return 0;
}
