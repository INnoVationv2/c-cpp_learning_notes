#include <ctype.h>
#include<stdio.h>

int get_val(char ch) {
    switch (toupper(ch)) {
        case 'A':
        case 'E':
        case 'I':
        case 'L':
        case 'N':
        case 'O':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
            return 1;
        case 'D':
        case 'G':
            return 2;
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            return 3;
        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            return 4;
        case 'K':
            return 5;
        case 'J':
        case 'X':
            return 8;
        case 'Q':
        case 'Z':
            return 10;
    }
    return 0;
}

int main() {
    printf("Enter a word: ");
    int result = 0;
    for (char ch; (ch = getchar()) != '\n';) {
        result += get_val(ch);
    }
    printf("Scrabble value: %d", result);
}
