#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *departure_time[] = {
        "8:00 am",
        "9:43 am",
        "11:19 am",
        "12:47 am",
        "2:00 pm",
        "3:45 pm",
        "7:00 pm",
        "9:45 pm"
    },
    *arrival_time[] = {
        "10:15 am",
        "11:52 am",
        "1:31 pm",
        "3:00 pm",
        "4:08 pm",
        "5:55 pm",
        "9:20 pm",
        "11:58 pm"
    };
    int hour, minute;
    char am_pm[3];

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    int minutes = hour * 60 + minute;
    int gap = 25 * 60;

    int idx = 0;
    for (int i = 0; i < sizeof(departure_time) / sizeof(departure_time[0]); i++) {
        sscanf(departure_time[i], "%d:%d %2s", &hour, &minute, am_pm);
        int _minutes = hour * 60 + minute;
        if (!strcmp(am_pm, "pm")) {
            _minutes += 12 * 60;
        }

        if (abs(minutes - _minutes) < gap) {
            gap = abs(minutes - _minutes);
            idx = i;
        }
    }

    printf("Closest departure time is: %s., arriving time: %s.", departure_time[idx], arrival_time[idx]);

    return 0;
}
