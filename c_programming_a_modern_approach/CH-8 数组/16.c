#include <ctype.h>
#include <stdio.h>

int main() {
    int flag[26] = {0};

    char ch;
    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        ++flag[tolower(ch) - 'a'];
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        --flag[tolower(ch) - 'a'];
    }

    for (int i = 0; i < 26; i++)
        if (flag[i] != 0) {
            printf("The words are not anagrams.");
            return 0;
        }
    printf("The words are anagrams.");

    return 0;
}
