#include<stdio.h>

int main() {
    float val, res = 0;
    while (1) {
        printf("Enter a number: ");
        scanf("%f", &val);

        if (val <= 0) {
            break;
        }
        res = val > res ? val : res;
    }

    printf("The largest number entered was %.2f\n", res);
    return 0;
}
