#include <ctype.h>
#include <stdio.h>

#define cal_subscript(c) (c - 'A')

int main() {
    char map[26] = {
        [cal_subscript('A')] = '4',
        [cal_subscript('B')] = '8',
        [cal_subscript('E')] = '3',
        [cal_subscript('I')] = '1',
        [cal_subscript('O')] = '0',
        [cal_subscript('S')] = '5'
    };

    printf("Enter message: ");
    char c;
    while ((c = getchar()) != '\n') {
        c = toupper(c);
        if (c == 'A' || c == 'B' || c == 'E' || c == 'I' || c == 'O' || c == 'S') {
            c = map[cal_subscript(c)];
        }
        putchar(c);
    }
    printf("!!!!!!!!!!\n");

    return 0;
}
