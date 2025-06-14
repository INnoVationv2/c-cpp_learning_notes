#include <stdio.h>
#include <string.h>

void create_magic_square(int n, int magic_square[n][n]) {
    int i = 0, j = n >> 1;
    for (int val = 1; val <= n * n; val++) {
        magic_square[i][j] = val;

        int _i = (i + n - 1) % n;
        int _j = (j + 1) % n;
        if (magic_square[_i][_j] != 0) {
            _i = (i + 1) % n;
            _j = j;
        }
        i = _i, j = _j;
    }
}

void print_magic_square(int n, int magic_square[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%2d ", magic_square[i][j]);
        printf("\n");
    }
}

int main() {
    int n;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int square[n][n];
    memset(square, 0, sizeof(square));

    create_magic_square(n, square);
    print_magic_square(n, square);

    return 0;
}
