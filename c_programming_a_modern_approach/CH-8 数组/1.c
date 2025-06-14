#include<stdio.h>

int main() {
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);

    int count[10] = {0};

    while (n) {
        int val = n % 10;
        count[val]++;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++) {
        if (count[i] > 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
