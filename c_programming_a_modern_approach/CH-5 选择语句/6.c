#include <stdio.h>

int main() {
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check_digit;
    printf("Enter the UPC digit: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &check_digit);

    int first_sum = d + i2 + i4 + j1 + j3 + j5;
    int second_sum = i1 + i3 + i5 + j2 + j4;
    int _check_digit = 9 - (3 * first_sum + second_sum - 1) % 10;

    printf("%s", check_digit == _check_digit ? "VALID" : "NOT VALID");
    return 0;
}
