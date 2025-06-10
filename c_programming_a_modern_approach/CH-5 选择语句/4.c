#include <stdio.h>

int main() {
    printf("Enter enter rate of wind: ");
    float rate;
    scanf("%f", &rate);

    if (rate < 1) {
        printf("Calm\n");
    } else if (rate <= 3) {
        printf("Light air\n");
    } else if (rate <= 27) {
        printf("Breeze\n");
    } else if (rate <= 47) {
        printf("Gale\n");
    } else if (rate <= 63) {
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }
    return 0;
}
