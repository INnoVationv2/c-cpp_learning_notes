#include <ctype.h>
#include <stdio.h>

int pow(int a, int b) {
    int val = 1;
    while (b--) {
        val = val * a;
    }
    return val;
}

int main() {
    int n;
    printf("Enter value of x: ");
    scanf("%d", &n);

    int res = 3 * pow(n, 5) + 2 * pow(n, 4) - 5 * pow(n, 3)
              - pow(n, 2) + 7 * n - 6;
    printf("%d", res);
    return 0;
}
