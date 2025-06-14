#include <stdio.h>

int main() {
    printf("Enter phone number: ");
    char phone_number[15];
    scanf("%s", phone_number);
    printf("In numeric form: ");
    for (int i = 0; i < 15; i++) {
        char c = phone_number[i];
        if (c == '\n')
            break;
        if (c < 'A' || c > 'Z') {
            putchar(c);
        }
        switch (c) {
            case 'A':
            case 'B':
            case 'C':
                putchar('2');
                break;
            case 'D':
            case 'E':
            case 'F':
                putchar('3');
                break;
            case 'G':
            case 'H':
            case 'I':
                putchar('4');
                break;
            case 'J':
            case 'K':
            case 'L':
                putchar('5');
                break;
            case 'M':
            case 'N':
            case 'O':
                putchar('6');
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                putchar('7');
                break;
            case 'T':
            case 'U':
            case 'V':
                putchar('8');
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                putchar('9');
                break;
        }
    }
    printf("\n");
    return 0;
}
