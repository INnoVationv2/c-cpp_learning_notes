#include <stdbool.h>
#include <stdio.h>

int main() {
    int year1, month1, day1, year2, month2, day2;

    printf("Enter first date(mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("Enter second date(mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    _Bool first = true;

    if (year1 != year2) {
        if (year1 > year2) {
            first = false;
        }
    } else if (month1 != month2) {
        if (month1 > month2) {
            first = false;
        }
    } else {
        if (day1 > day2) {
            first = false;
        }
    }

    if (first)
        printf("%d/%d/%.2d is earlier that %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
    else
        printf("%d/%d/%.2d is earlier that %d/%d/%.2d", month2, day2, year2, month1, day1, year1);

    return 0;
}
