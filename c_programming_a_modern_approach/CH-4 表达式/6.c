#include <stdio.h>

int main() {
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
    printf("Enter the EAN digit: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    int first_sum = i2 + i4 + i6 + i8 + i10 + i12;
    int second_sum = i1 + i3 + i5 + i7 + i9;
    int total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - (total - 1) % 10);
    return 0;
}
