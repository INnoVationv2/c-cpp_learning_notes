#include<stdio.h>

int main() {
    int val;
    printf("Enter a number: ");
    scanf("%d", &val);

    printf("The reversal is: ");
    while (val) {
        printf("%d", val % 10);
        val /= 10;
    }
    return 0;
}
