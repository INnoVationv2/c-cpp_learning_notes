#include <stdio.h>

void method_1(int val) {
    int base = 1, result = 0;
    for (; val; base *= 10, val /= 8) {
        result = base * (val % 8) + result;
    }
    printf("In octal, your number is: %.5d\n", result);
}

void method_2(int val) {
    printf("In octal, your number is: %.5o\n", val);
}

int main() {
    int val;
    printf("Enter number between 0 ~ 32767: ");
    scanf("%d", &val);

    method_1(val);
    method_2(val);
    return 0;
}
