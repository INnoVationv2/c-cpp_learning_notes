#include <ctype.h>
#include<stdio.h>

#define get_subscripts(c) c - 'A'

int main() {
    int map[26] = {
        [get_subscripts('A')] = 1, [get_subscripts('E')] = 1, [get_subscripts('I')] = 1,
        [get_subscripts('L')] = 1, [get_subscripts('N')] = 1, [get_subscripts('O')] = 1,
        [get_subscripts('R')] = 1, [get_subscripts('S')] = 1, [get_subscripts('T')] = 1,
        [get_subscripts('U')] = 1,
        [get_subscripts('D')] = 2, [get_subscripts('G')] = 2,
        [get_subscripts('B')] = 3, [get_subscripts('C')] = 3, [get_subscripts('M')] = 3,
        [get_subscripts('P')] = 3,
        [get_subscripts('F')] = 4, [get_subscripts('H')] = 4, [get_subscripts('V')] = 4,
        [get_subscripts('W')] = 4, [get_subscripts('Y')] = 4,
        [get_subscripts('K')] = 5,
        [get_subscripts('J')] = 8, [get_subscripts('X')] = 8,
        [get_subscripts('Q')] = 10, [get_subscripts('Z')] = 10
    };
    printf("Enter a word: ");
    int result = 0;
    for (char ch; (ch = getchar()) != '\n';) {
        result += map[toupper(ch) - 'A'];
    }
    printf("Scrabble value: %d", result);
}
