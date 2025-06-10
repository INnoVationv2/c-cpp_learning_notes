#include <stdio.h>

int main() {
    double amount, rate, payment;
    printf("Enter amount of load: ");
    scanf("%lf", &amount);
    printf("Enter interest rate: ");
    scanf("%lf", &rate);
    rate = rate / 100 / 12;
    printf("Enter monthly payment: ");
    scanf("%lf", &payment);

    amount = amount - payment + amount * rate;
    printf("Balance remaining after first payment: %.2lf\n", amount);

    amount = amount - payment + amount * rate;
    printf("Balance remaining after second payment: %.2lf\n", amount);

    amount = amount - payment + amount * rate;
    printf("Balance remaining after third payment: %.2lf\n", amount);

    return 0;
}
