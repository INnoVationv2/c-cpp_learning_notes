#include<stdio.h>

char stack[100];

int main() {
    char ch;
    int top = -1;
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {
        if ((ch == ')' && stack[top] == '(') ||
            (ch == '}' && stack[top] == '{') ||
            (ch == ']' && stack[top] == '[')) {
            --top;
            continue;
        }
        stack[++top] = ch;
    }
    printf("Parentheses/braces are%s nested properly\n", top == -1 ? "" : " not");
    return 0;
}
