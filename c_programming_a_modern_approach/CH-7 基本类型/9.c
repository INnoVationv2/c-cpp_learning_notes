#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

_Bool is_pm() {
    char ch;
    while ((ch = getchar()) != '\n') {
        switch (toupper(ch)) {
            case 'A':
                return false;
            case'P':
                return true;
        }
    }
    return true;
}

int main() {
    int hour, minute;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hour, &minute);
    if (is_pm()) {
        hour += 12;
    }

    printf("Equivalent 24-hour time: %d:%d", hour, minute);
    return 0;
}
