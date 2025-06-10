#include <stdio.h>

int main() {
    int numer_1, deno_1, numer_2, deno_2;
    printf("Enter two fractions seperated by a plus sign: ");
    scanf("%d/%d+%d/%d", &numer_1, &deno_1, &numer_2, &deno_2);

    int numerator = numer_1 * deno_2 + numer_2 * deno_1;
    int denominator = deno_1 * deno_2;
    printf("%d/%d", numerator, denominator);

    return 0;
}
