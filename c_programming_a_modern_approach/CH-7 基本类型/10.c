#include <ctype.h>
#include <stdio.h>

int count_vowel() {
    int count = 0;
    char ch;
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    printf("Enter a sentence: ");
    printf("Your setence contains %d vowels.", count_vowel());
    return 0;
}
