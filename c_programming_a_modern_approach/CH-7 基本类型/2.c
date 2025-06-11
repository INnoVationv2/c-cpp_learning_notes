#include<stdio.h>

int main() {
    printf("This program prints a table of squares.\n");

    for (int i = 1;; i++) {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0)
            while (getchar() != '\n') {
            }
    }
}
