#include <stdio.h>
#include <stdlib.h>

int get_gcd(int x, int y) {
    x = abs(x), y = abs(y);
    while (y) {
        int tmp = y;
        y = x % y;
        x = tmp;
    }
    return x;
}

int main() {
    int numer_1, deno_1, numer_2, deno_2;
    char op;
    printf("Enter two fractions seperated by a plus sign: ");
    scanf("%d/%d%c%d/%d", &numer_1, &deno_1, &op, &numer_2, &deno_2);

    if (deno_1 != deno_2) {
        deno_1 = deno_1 * deno_2;
        numer_1 = numer_1 * deno_2;
        numer_2 = numer_2 * deno_1;
    }
    switch (op) {
        case '+':
            numer_1 += numer_2;
            break;
        case '-':
            numer_1 -= numer_2;
            break;
        case '*':
            numer_1 *= numer_2;
            break;
        case '/':
            numer_1 /= numer_2;
            break;
    }

    int gcd = get_gcd(numer_1, deno_1);
    if (gcd != 1) {
        numer_1 = numer_1 / gcd;
        deno_1 = deno_1 / gcd;
    }
    printf("%d/%d", numer_1, deno_1);
    return 0;
}
