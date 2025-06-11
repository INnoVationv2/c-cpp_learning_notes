#include <stdbool.h>
#include <stdio.h>

_Bool compare_date(int year1, int month1, int day1, int year2, int month2, int day2) {
    return year1 > year2 ||
           (year1 == year2 && month1 > month2) ||
           (year1 == year2 && month1 == month2 && day1 > day2);
}

int main() {
    int year = 99, month = 99, day = 99;
    int year1, month1, day1;

    while (1) {
        printf("Enter date(mm/dd/yy): ");
        scanf("%d/%d/%d", &month1, &day1, &year1);
        if (year1 == 0 && month1 == 0 && day1 == 0) {
            break;
        }
        if (compare_date(year, month, day, year1, month1, day1)) {
            year = year1;
            month = month1;
            day = day1;
        }
    }
    printf("%d/%d/%.2d is the earlier date", month, day, year);

    return 0;
}
