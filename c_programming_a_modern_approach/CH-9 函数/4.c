#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void read_word(int counts[26]) {
    char ch;
    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        ++counts[tolower(ch) - 'a'];
    }
}

bool equal_array(int counts1[26], int counts2[26]) {
    for (int i = 0; i < 26; ++i) {
        if (counts1[i] != counts2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int counts1[26] = {0}, counts2[26] = {0};

    read_word(counts1);
    read_word(counts2);

    if (!equal_array(counts1, counts2)) {
        printf("The words are not anagrams.");
    } else {
        printf("The words are anagrams.");
    }

    return 0;
}
