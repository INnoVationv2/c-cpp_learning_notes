#include<stdio.h>

int main() {
    int x, y, z;
    printf("Enter a 2-digit number: ");
    scanf("%1d%1d%1d", &x, &y, &z);

    printf("The reversal is: %d%d%d", z, y, x);
    return 0;
}
