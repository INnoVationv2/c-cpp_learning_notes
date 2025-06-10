#include<stdio.h>

int main() {
    int stock_number;
    float stock_price, commission;

    printf("Enter number of stock: ");
    scanf("%d", &stock_number);

    printf("Enter price of per stock: ");
    scanf("%d", &stock_price);

    float value = stock_price * stock_number;

    if (value < 2500.00f) {
        commission = 30.00f + .017f * value;
    } else if (value < 6250.00f) {
        commission = 56.00f + .0066f * value;
    } else if (value < 20000.00f) {
        commission = 76.00f + .0034f * value;
    } else if (value < 50000.00f) {
        commission = 100.00f + .0022f * value;
    } else if (value < 500000.00f) {
        commission = 155.00f + .0011f * value;
    } else {
        commission = 255.00f + .0009f * value;
    }

    if (commission < 39.00f)
        commission = 39.00f;
    printf("Commission: %.2f\n", commission);

    if (stock_number < 2000) {
        commission += stock_number * 33.03;
    } else {
        commission += stock_number * 33.02;
    }
    printf("Competitor Commission: %.2f\n", commission);
    return 0;
}
