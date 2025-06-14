#include <stdio.h>

int pow(int base, int n) {
    if (n <= 0) return 1;
    if (n & 1) return base * pow(base * base, n >> 1);
    return pow(base * base, n >> 1);
}

int main() {
    int x, n;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of n: ");
    scanf("%d", &n);

    int res = 0;
    if (n % 2 == 0) {
        res = pow(x, n);
    } else {
        res = pow(x, n - 1) * x;
    }

    printf("%d^%d = %d\n", x, n, res);
    return 0;
}