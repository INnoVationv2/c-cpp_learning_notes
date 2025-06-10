#include <stdio.h>

int main() {
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    printf("Enter the UPC digit: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

    int first_sum = d + i2 + i4 + j1 + j3 + j5;
    int second_sum = i1 + i3 + i5 + j2 + j4;
    int total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - (total - 1) % 10);
    return 0;
}
