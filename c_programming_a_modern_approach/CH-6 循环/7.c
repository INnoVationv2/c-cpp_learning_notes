#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2;; i += 2) {
        int sqrt = i * i;
        if (sqrt > n) {
            break;
        }

        printf("%d\n", sqrt);
    }
    return 0;
}
