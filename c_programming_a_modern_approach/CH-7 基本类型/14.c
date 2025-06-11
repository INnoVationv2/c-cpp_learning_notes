#include <stdio.h>
#include <tgmath.h>

int main() {
    double x, y = 1;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while (1) {
        double x_y = x / y;
        double new_y = (y + x_y) / 2;
        if (fabs(y - new_y) < 0.00001) {
            break;
        }
        y = new_y;
    }

    printf("Square root: %.5lf", y);

    return 0;
}
