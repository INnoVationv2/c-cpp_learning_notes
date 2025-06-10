#include <stdio.h>

int main() {
    double amount;
    printf("Enter an amount: ");
    scanf("%lf", &amount);

    printf("With tax added: %.2lf", amount + amount * 0.05);
    return 0;
}
