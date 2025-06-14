#include <stdio.h>

int main() {
    char sentence[200], words[20][20];

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);
    printf("Reversal of sentence: ");

    int idx = 0, i1 = 0, i2 = 0;
    for (char ch; (ch = sentence[idx]) != '\n'; idx++) {
        if (ch == ' ') {
            words[i1][i2] = '\0';
            ++i1;
            i2 = 0;
            continue;
        }

        if (ch == '.' || ch == '?' || ch == '!') {
            for (; i1 >= 0; i1--) {
                printf("%s", words[i1]);
                if (i1 != 0) {
                    printf(" ");
                }
            }
            putchar(ch);
            i1 = i2 = 0;
            continue;
        }

        words[i1][i2++] = ch;
    }

    return 0;
}
