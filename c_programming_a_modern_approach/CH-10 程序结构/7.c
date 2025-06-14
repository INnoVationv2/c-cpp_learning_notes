#include <stdio.h>
#include <string.h>

char symbols[10][3][4] = {
    {" _ ", "| |", "|_|"}, // 0
    {"   ", "  |", "  |"}, // 1
    {" _ ", " _|", "|_ "}, // 2
    {" _ ", " _|", " _|"}, // 3
    {"   ", "|_|", "  |"}, // 4
    {" _ ", "|_ ", " _|"}, // 5
    {" _ ", "|_ ", "|_|"}, // 6
    {" _ ", "  |", "  |"}, // 7
    {" _ ", "|_|", "|_|"}, // 8
    {" _ ", "|_|", " _|"}, // 9
};

void display_number(char *str) {
    int len = strlen(str);
    for (int row = 0; row < 3; row++) {
        for (int i = 0; i < len; i++) {
            int idx;
            if (str[i] >= '0' && str[i] <= '9')
                idx = str[i] - '0';
            else
                continue; // 跳过无效字符
            printf("%s ", symbols[idx][row]);
        }
        printf("\n");
    }
}


int main() {
    printf("Enter a number: ");

    char ch, number[10];
    int idx = 0;
    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9')
            number[idx++] = ch;
    }

    number[idx] = '\0';
    display_number(number);
    return 0;
}
