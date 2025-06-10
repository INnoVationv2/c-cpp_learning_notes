#include <stdio.h>

char *print_number(int number) {
    switch (number) {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        default:
            printf("nine");
            break;
    }
}

int main() {
    int val;
    printf("Enter a two-digit number: ");
    scanf("%d", &val);

    printf("You entered the number ");
    print_number(val / 10), printf("-"), print_number(val % 10);
    return 0;
}
