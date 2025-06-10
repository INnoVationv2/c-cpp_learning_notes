#include <stdio.h>

int main() {
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    printf("Letter grade: ");

    switch (grade / 10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("F");
            break;
        case 6:
            printf("D");
            break;
        case 7:
            printf("C");
            break;
        case 8:
            printf("B");
            break;
        default:
            printf("A");
            break;
    }

    return 0;
}
