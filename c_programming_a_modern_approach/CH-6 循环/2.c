#include<stdio.h>

int main() {
    int m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    while (n) {
        int tmp = n;
        n = n % m;
        m = tmp;
    }
    printf("Greatest Common Divisor: %d", m);
    return 0;
}
