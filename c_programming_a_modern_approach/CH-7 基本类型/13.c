#include <ctype.h>
#include <stdio.h>

int main() {
    float word_len = 0;
    int count = 0, times = 1;
    char ch;
    while ((ch = getchar()) != '\n') {
        if (toupper(ch) == ' ') {
            ++times;
            word_len += count;
            count = 0;
            continue;
        }
        ++count;
    }
    word_len += count;

    printf("Average word length: %.1f", word_len / times);
    return 0;
}
