#include <stdbool.h>
#include <stdio.h>

int stack[100];

bool calculate() {
    printf("Enter an RPN expression: ");

    char ch;
    int val = 0, top = -1;
    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            if (val != 0) {
                stack[++top] = val;
                val = 0;
            }
        } else if (ch >= '0' && ch <= '9') {
            val = val * 10 + (ch - '0');
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=') {
            int b = stack[top--], a = stack[top--];
            switch (ch) {
                case '+':
                    stack[++top] = a + b;
                    break;
                case '-':
                    stack[++top] = a - b;
                    break;
                case '*':
                    stack[++top] = a * b;
                    break;
                case '/':
                    stack[++top] = a / b;
                    break;
                case '=':
                    printf("Value of expression: %d\n", stack[0]);
                    while (getchar() != '\n')
                        getchar();
                    return true;
            }
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    while (calculate()) {
    }
    return 0;
}
