#include<stdio.h>

int main() {
    int n, m;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &m);

    int x = n, y = m;
    while (x) {
        int tmp = x;
        x = x % y;
        y = tmp;
    }
    n = n / y;
    m = m / y;

    printf("In lowest terms:%d/%d", n, m);
    return 0;
}
