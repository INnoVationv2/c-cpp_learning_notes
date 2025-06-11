#include <stdio.h>

double calculate(char op, double a, double b) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
    }
    return 0;
}


int main() {
    double a, b, c;
    char op1, op2;
    scanf("%lf%c%lf%c%lf", &a, &op1, &b, &op2, &c);

    a = calculate(op1, a, b);
    a = calculate(op2, a, c);

    printf("Value of expression: %.1lf", a);
    return 0;
}
