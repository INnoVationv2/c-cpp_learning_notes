#include <stdio.h>

int main() {
    double theta;
    printf("Enter a number: ");
    scanf("%lf", &theta);

    int sub = 1;
    double result = 1;
    for (int i = 1; ; i++) {
        sub *= i;
        double tmp = 1.0 / sub;
        result += tmp;
        if (tmp < theta) {
            break;
        }
    }
    printf("Approximate value of e is: %lf", result);
    return 0;
}
