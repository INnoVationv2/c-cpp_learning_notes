#include <stdio.h>

int main() {
    double amount, rate;
    printf("Enter amount of load: ");
    scanf("%lf", &amount);
    printf("Enter interest rate: ");
    scanf("%lf", &rate);
    rate = rate / 100 / 12;

    int times;
    printf("Enter number of payment times: ");
    scanf("%d", &times);
    double payment = amount / times;

    for (int i = 1; i <= times; i++) {
        amount = amount - payment + amount * rate;
        printf("Balance remaining after %d payment: %.2lf\n", i, amount);
    }

    return 0;
}
