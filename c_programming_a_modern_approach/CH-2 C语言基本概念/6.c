#include <stdio.h>

int main() {
    int x;
    printf("Enter an value: ");
    scanf("%d", &x);

    int res = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("result = %d", res);
    return 0;
}
