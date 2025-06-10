#include<stdio.h>
#include<stdbool.h>

int main() {
    int hour, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    _Bool am = true;
    if (hour > 12) {
        hour %= 12;
        am = false;
    }
    printf("Equivalent 12-hour time: %d:%.2d %s",
           hour, minutes, am ? "AM" : "PM");
    return 0;
}
