#include <stdio.h>

int max(int high, int i) {
    return high >= i ? high : i;
}

int min(int high, int i) {
    return high <= i ? high : i;
}

int main() {
    int s[5][5];
    for (int i = 0; i < 5; i++) {
        printf("Enter student %d's grade: ", i);
        for (int j = 0; j < 5; j++)
            scanf("%d", &s[i][j]);
    }

    printf("Student ID\tTotal Grade\tAverage Grade\t\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", i);
        int sum = 0;
        for (int j = 0; j < 5; j++)
            sum += s[i][j];
        printf("%d\t%f\t\n", sum, sum / 5.0);
    }
    printf("\n");

    printf("Course ID\tAverage Grade\tHighest Grade\tLowerest Grade\t\n");
    for (int j = 0; j < 5; j++) {
        printf("%d\t", j);
        int sum = 0, high = 0, low = 0;
        for (int i = 0; i < 5; i++) {
            sum += s[i][j];
            high = max(high, s[i][j]);
            low = min(low, s[i][j]);
        }
        printf("%f\t%d\t%d\t\n", sum / 5.0, high, low);
    }
    printf("\n");

    return 0;
}
