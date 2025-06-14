#include <stdio.h>

int main() {
    int s[5][5];
    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i);
        for (int j = 0; j < 5; j++)
            scanf("%d", &s[i][j]);
    }

    printf("Row totals: ");
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++)
            sum += s[i][j];
        printf("%d ", sum);
    }
    printf("\n");

    printf("Column totals: ");
    for (int j = 0; j < 5; j++) {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += s[i][j];
        printf("%d ", sum);
    }
    printf("\n");

    return 0;
}
