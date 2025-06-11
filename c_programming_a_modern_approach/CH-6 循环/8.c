#include <stdio.h>

int main() {
    int days, starting_day;
    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    --starting_day;
    for (int idx = 1; idx <= starting_day; idx++) {
        printf("   ");
    }

    for (int day = 1; day <= days; day++) {
        printf("%2d ", day);
        if ((day + starting_day) % 7 == 0) {
            printf("\n");
        }
    }
    return 0;
}
