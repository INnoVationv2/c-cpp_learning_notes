#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int square[n][n];
    memset(square, 0, sizeof(square));

    int i = 0, j = n >> 1;
    for (int val = 1; val <= n * n; val++) {
        square[i][j] = val;

        int _i = (i + n - 1) % n;
        int _j = (j + 1) % n;
        if (square[_i][_j] != 0) {
            _i = (i + 1) % n;
            _j = j;
        }
        i = _i, j = _j;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%2d ", square[i][j]);
        printf("\n");
    }

    return 0;
}
