#include <stdio.h>
#include <math.h>

int main() {
    int val;
    printf("Enter an value: ");
    scanf("%d", &val);

    int res = 3 * pow(val, 5) + 2 * pow(val, 4) - 5 * pow(val, 3)
              - pow(val, 2) + 7 * val - 6;

    printf("result = %d", res);
    return 0;
}
