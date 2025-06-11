#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sub = 1;
    double result = 1;
    for (int i = 1; i <= n; i++) {
        sub *= i;
        result += 1.0 / sub;
    }
    printf("Approximate value of e is: %lf", result);
    return 0;
}
