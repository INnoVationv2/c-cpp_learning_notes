#include <stdio.h>
#include "../common_header.h"

int main() {
    double r;
    printf("Please input radius of your sphere: ");
    scanf("%lf", &r);
    printf("Radius: %.2f\n", r);

    printf("Volume: %.2f\n", V(r));
    return 0;
}
